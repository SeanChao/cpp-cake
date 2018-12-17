#include <iostream>
#include "Shapes.h"
using std::cout;
using std::endl;

int main() {
    Triangle t1(3,4,5);
    Rectangle r1(2.5,4);
    Square s1(4.5);
    Ellipse e1(4,5);
    Circle c1(1);
//    std::cout << t1.area() << std::endl;
//    std::cout << r1.area() << std::endl;
//    std::cout << s1.area() << std::endl;
//    std::cout << e1.area() << std::endl;
//    std::cout << c1.area() << std::endl;
    Shape *shapes[] = {&t1, &r1, &s1, &e1, &c1};
    for(int i=0; i< 5; i++){
        cout << shapes[i]->area() << endl;
    }

    Ellipse &e2 = c1;
    cout << e2.area() << endl;
    return 0;
}