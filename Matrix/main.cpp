#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
    Matrix cm(2,3);
    cm[0][1] = 5;
    cm[2][2] = 6;

    cout << cm[0][1] << cm[2][2] <<endl;
    return 0;
}