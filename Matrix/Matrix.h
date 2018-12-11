//
// Created by SeanC on 2018/12/11.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include "Row.h"

class Matrix {
    int m_x;
    int m_y;
    Row **data;

public:
    Matrix(int x, int y);
    ~Matrix();

    Row &operator[](int i);

};


#endif //MATRIX_MATRIX_H
