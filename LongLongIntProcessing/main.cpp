#include <iostream>
#include <cstring>
#include "LongLongInt.h"
using namespace std;

/*
 *dynamic allocation
 */
char *input(){
    int arraySize = 4;
    char *p = new char[arraySize];
    int counter = 0;
    char temp;
    while(cin.get(temp)&&temp!='.'){
        counter++;
        if(counter+1>arraySize) {
            char *pTemp = new char[++arraySize];
            strcpy(pTemp, p);
            delete[]p;
        p = pTemp;
    }
        p[counter-1]=temp;
    }
    p[counter]='\0';

    return p;
}

int main() {
//    char *num1 = input();
//    LongLongInt number1(num1);
//    number1.display();
//
//    char *num2 = input();
//    LongLongInt number2(num2);
//    number2.display();
//    cout << "The sum is " << (number1+number2).getValue() <<endl;

    LongLongInt n1("92999999999999323432234234256745324223457658763463456574564856856790486963443452344");
    LongLongInt n2("992999999999999766588749342356742765904356546004523578090234234235435347877567678342542234");
//    LongLongInt n1("1999039");
//    LongLongInt n2("29999599");
    //LongLongInt n3 = n2;
    n1.display();
    n2.display();
    //n3.display();
    cout <<"The sum is " << (n1+n2).getValue() <<endl;

    char *num1 = input();
    char *num2 = input();
    LongLongInt N1(num1);
    LongLongInt N2(num2);

    cout << (N1+N2).getValue();

    return 0;
}