//
// Created by SeanC on 2018/12/11.
//

#include "Matrix.h"

Matrix::Matrix(int x, int y):m_x(x),m_y(y) {
    data = new Row*[x+1];
    for(int i=0; i<=m_x; i++){
        data[i] = new Row(m_y);
    }
}

Matrix::~Matrix() {
    delete []data;

}

Row &Matrix::operator[](int i) {
    return *data[i];
}