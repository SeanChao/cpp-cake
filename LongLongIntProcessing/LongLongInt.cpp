//
// Created by SeanC on 2018/12/4.
//

#include <cstring>
#include "LongLongInt.h"

LongLongInt::LongLongInt(char *num){
    length = strlen(num);
    value = new char[length];
    strcpy(value,num);
}

LongLongInt::LongLongInt(const LongLongInt &obj){
    length = obj.length;
    value = new char[length];
    strcpy(value, obj.value);
}

LongLongInt LongLongInt::operator+ (const LongLongInt &r) const {
    //record the longer length
    bool thisIsLonger = this->length>r.length;
    int max_length = thisIsLonger ? this->length:r.length;
    //generate 2 LLI with length+1
    char *num1 = new char[max_length];
    char *num2 = new char[max_length];
    strcpy(num1,this->value);
    strcpy(num2,r.value);
    char *sum = new char[max_length+1];
    //reverse the two numbers
    char *rnum1 = reverse(num1), *rnum2 = reverse(num2);

    bool carryFlag = false;
    for(int i = 0; i<max_length+1 ; i++){
        if(i==max_length){
            if(carryFlag == true) sum[i] = '1';
            else sum[i] = '0';
            break;
        }
        int digit = rnum1[i]-48+rnum2[i]-48;
        if(rnum1[i]<48||rnum1[i]>57) digit = rnum2[i]-48;
        if(rnum2[i]<48||rnum2[i]>57) digit = rnum1[i]-48;
        if(carryFlag) digit++;
        carryFlag = false;
        if(digit>=10){
            digit -= 10;
            carryFlag = true;
        }
        sum[i] = digit+48;
    }
    return LongLongInt(reverse(LongLongInt(sum)));
}

void LongLongInt::display() const{
    std::cout << "The number is:" << value <<", length=" << length << '\n';
}

char *LongLongInt::getValue() const {
    return value;
}

char *LongLongInt::reverse(const LongLongInt &num) const {
    char *reversedCh = new char[num.length+1];

    for(int i=0; i<num.length; i++){
        reversedCh[num.length-i-1] = num.value[i];
    }
    char *reversedInt=new char[num.length];
    strncpy(reversedInt, reversedCh, num.length);
    //std::cout<< "The num in reversed order is:" << reversedInt << "\n";
    //delete 0 at the beginning
    bool flag = true;
    for(int i = 0; i < num.length; i++){
        if((reversedInt[i]<=48 || reversedInt[i]>57) && flag){
            for(int j=i; j<num.length; j++) reversedInt[j]=reversedInt[j+1];
        }else flag = false;
    }
    return reversedInt;
}
