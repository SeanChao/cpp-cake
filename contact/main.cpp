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
        cin >> student->name >> student->birthday.year >> student->birthday.month >> student->birthday.day >> student->phoneNumber;
        cin.ignore();
        cin.getline(student->address, 50);
        rear->next = student;
        rear = student;
        studentCounter ++;
    }
    rear->next = NULL;
}

void del() {
    char delName[20];
    cout<<"请输入要删除的学生姓名" << endl;
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

    if(order==1) {
        if(strcmp(a->name,b->name)>0){
            return 1;
        }else return 0;
    } else {
        if(strcmp(b->name,a->name)>0){
            return 1;
        }else return 0;
    }

}


int compByPhoneNumber(Student *a, Student *b,int order){
    if(order==1) {
        if(a->phoneNumber > b->phoneNumber){
            return 1;
        }else return 0;
    } else {
        if(a->phoneNumber < b->phoneNumber){
            return 1;
        }else return 0;
    }
}

int compByAge(Student *a, Student *b,int order){

    int yearA = a->birthday.year, yearB = b->birthday.year;
    int monthA = a->birthday.month, monthB = b->birthday.month;
    int dayA = a->birthday.day, dayB = b->birthday.day;
    int flag=0;
    if(yearA>yearB) flag = 1;
    else if(yearA==yearB){
        if(monthA>monthB)  flag = 1;
        else if(monthA==monthB)
            if(dayA>dayB) flag = 1;
    }

    if(order == 1) return 1-flag;
    else return flag;
}


void copyStudent(Student *a, Student *b){
    strcpy(a->name,b->name);
    a->phoneNumber = b->phoneNumber;
    strcpy(a->address,b->address);
    a->birthday = b->birthday;
}

void swap(Student *a, Student *b){
    Student *temp = new Student;
    copyStudent(temp,b);
    copyStudent(b,a);
    copyStudent(a,temp);

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
            "5: 年龄 升序\n"
            "6: 年龄 降序\n"
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
            break;
        case 5:
            order = 1;
            comp = compByAge;
            break;
        case 6:
            order = 0;
            comp = compByAge;
            break;
    }
    //swap
    Student *p = head;
    for(int i=0; i<studentCounter-1; i++){
        p=head->next;
        bool flag = false;
        //Student *q = head;
        for(int j=0; j<studentCounter-i-1; j++){
            if(comp(p,p->next,order)){
                flag = true;
                swap(p,p->next);
            }
            p = p->next;
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
             << student->phoneNumber << " "
             << student->address << endl;
    }
    cout << "合计" << studentCounter << "位学生" << endl;
}

int main() {
    void (*func[6])() = {NULL,add,del,printStudentInfo,sort};

    head = rear = new Student;
    while(true){
	    printMenu();
	    int select;
	    cin >> select;
	    
	    if (select==0) {
	    	cout << "感谢您的使用" << endl;
	    	return 0;
	    }else func[select]();
	}
}