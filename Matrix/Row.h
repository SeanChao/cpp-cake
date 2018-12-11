//
// Created by SeanC on 2018/12/11.
//

#ifndef MATRIX_ROW_H
#define MATRIX_ROW_H


class Row {
    int *m_data;
    int m_y;

public:
    Row(int y);
    ~Row();
    int &operator[](int j);
};


#endif //MATRIX_ROW_H
