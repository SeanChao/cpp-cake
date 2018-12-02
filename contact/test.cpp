#include <iostream>
#include <cstring>

using namespace std;

struct Birthday {
    int year;
    int month;
    int day;
};

struct Student {
    char name[20];
    Birthday birthday;
    int phoneNumber;
    char address[50];
    Student *next;
    Student *prev;
};

Student *head, *rear, *student;
int studentCounter = 0;

void add() {
    cout << "Please input n(n<10): ";
    int n;
    cin >> n;
    while (n--) {
        student = new Student;
        cout << "请输入学生信息: name birthday(yyyy-mm-dd) phoneNumber address" << endl;
        //cin >> student->name >> student->birthday.year >> student->birthday.month >> student->birthday.day >> student->phoneNumber;
        cin >> student->name >> student->phoneNumber;
        cin.ignore();
        //cin.getline(student->address, 50);
        rear->next = student;
        rear->prev = rear;
        rear = student;
        studentCounter ++;
    }
    rear->next = NULL;
}

void del() {
    char delName[20];
    cin.ignore();
    cin.getline(delName, 20);
    Student *stu_prev = head;
    for (Student *stu = head->next; stu != NULL; stu = stu->next) {
//        cout << "delName=" << delName << " stu->name=" << stu->name << endl;
        if (strcmp(delName, stu->name) == 0) {
//            cout << "name matched! stu->name=" << stu->name << endl;
            stu_prev->next = stu->next;
            if (stu->next == NULL) rear = stu_prev;
            delete (stu);
            studentCounter--;
            break;
        }
        stu_prev = stu;
    }
}



int compByName(Student *a, Student *b, int order) {
    /**
     * order: 1-increase 0-decrease
     * order=1 -> if a>b return +; a<b return -; a=b return 0;
     * order=0 -> if a>b return -; a<b return +; a=b return 0;
     */
     if(order == 1) return strcmp(a->name,b->name);
     else return strcmp(a->name, b->name);
}


int compByPhoneNumber(Student *a, Student *b,int order){
    if(order==1) return a->phoneNumber > b->phoneNumber;
    else return  a->phoneNumber < b->phoneNumber;
}

int locateNode(Student *student){
        Student *p = head->next;
        for(int i = 0; i < studentCounter; i++ ){
            if(p==student){
                return i;
            }
        }
    return -1;
}

Student* findNodeByIndex(int index){
    Student *p = head;
    for(int i=0; i<index; i++){
        p = p->next;
        if(i==index) {
            return p;
        }
    }
    return NULL;
}

void swap(Student *a, Student *b){
	cout<<"SWAP!" <<endl;
	int indexA = locateNode(a);
	int indexB = locateNode(b);
	findNodeByIndex(indexA-1)->next = b;
	a->next = findNodeByIndex(indexB+1);
	b->next = a;
}
//Student studentArray[], int (*comp)(Student *, Student *, int order)
void sort() {
    int (*comp)(Student *, Student *, int);
    cout << "请选择排序方式\n"
            "---------------\n"
            "1: 姓名 升序\n"
            "2: 姓名 降序\n"
            "3: 电话 升序\n"
            "4: 电话 降序\n"
            "0: 返回\n";
    int select;
    int order;
    cin >> select;
    switch (select) {
        case 1:
            order = 1;
            comp = compByName;
            break;
        case 2:
            order = 0;
            comp = compByName;
            break;
        case 3:
            order = 1;
            comp = compByPhoneNumber;
            break;
        case 4:
            order = 0;
            comp = compByPhoneNumber;
    }
    //swap
    Student *p = head;
    for(int i=0; i<studentCounter-1; i++){
        p=p->next;
        bool flag = false;
        for(int j=i; j<studentCounter-1; j++){
            if(comp(p,p->next,order)){
                flag = true;
                swap(p,p->next);
            }
        }
        if(!flag) break;
    }

}

void printMenu() {
    cout << "班级通讯录管理系统\n"
            "---------------\n"
            "1: 添加学生\n"
            "2: 删除学生\n"
            "3: 显示所有学生信息\n"
            "4: 排序\n"
            "0: 退出系统\n";
}

void printStudentInfo() {
    for (Student *student = head->next; student != NULL; student = student->next) {
        cout << student->name << " "
             << student->birthday.year << "/" << student->birthday.month << "/" << student->birthday.day << " "
             << student->phoneNumber << student->address << endl;
    }
    cout << "合计" << studentCounter << "位学生" << endl;
}

int main() {
	//void *(f[3])()= {NULL, add, del};
	
    head = rear = new Student;
    Student *s1 = new Student;
    //s1->name="sc";
    s1->phoneNumber=423;
    rear->next = s1;
    rear = s1;
    Student *s2 = new Student;
    s2 ->phoneNumber =  341;
    rear->next = s2;
    rear=s2;
    Student *s3 = new Student;
    s3->phoneNumber= 123;
    rear->next=s3;rear = s3;
    rear->next=NULL;
    studentCounter=3;
    while(true){
	    printMenu();
	    int select;
	    cin >> select;
	    
	    if (select==0) {
	    	cout << "感谢您的使用" << endl;
	    	return 0;
	    }else{
	    //	f[select]();
	    }
	    switch(select){
	    	case 1: add(); break;
	    	case 2: del(); break;
	    	case 3: printStudentInfo();  break;
	    	case 4: sort(); break;	
	    } 
    
	}
    return 0;
}