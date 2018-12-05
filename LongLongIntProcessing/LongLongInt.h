//
// Created by SeanC on 2018/12/4.
//

#ifndef LONGLONGINTPROCESSING_LONGLONGINT_H
#define LONGLONGINTPROCESSING_LONGLONGINT_H

#include <iostream>

class LongLongInt {
private:
    char *value;

    int length = 0;

public:
    LongLongInt(char *num);

    LongLongInt(const LongLongInt &obj);

    LongLongInt operator+ (const LongLongInt &r1) const;

    char *reverse(const LongLongInt &) const;

    void display() const;

    char *getValue() const;

};


#endif //LONGLONGINTPROCESSING_LONGLONGINT_H
