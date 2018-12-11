//
// Created by SeanC on 2018/12/11.
//

#include "Row.h"

Row::Row(int y):m_y(y){
    m_data = new int[y+1];
}

Row::~Row(){
    delete[] m_data;
}

int &Row::operator[](int j){
    if(j>m_y) j=m_y;
    return m_data[j];
}