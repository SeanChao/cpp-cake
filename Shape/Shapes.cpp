//
// Created by SeanC on 2018/12/14.
//

#include <cmath>
#include "Shapes.h"

Triangle::Triangle(double a, double b, double c) :a(a),b(b),c(c){}

double Triangle::area() const {
    double s = 0.5*(a+b+c);
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

double Triangle::getA() const {
    return a;
}

void Triangle::setA(double a) {
    this->a = a;
}

double Triangle::getB() const {
    return b;
}

void Triangle::setB(double b) {
    Triangle::b = b;
}

double Triangle::getC() const {
    return c;
}

void Triangle::setC(double c) {
    Triangle::c = c;
}


//Rectangle
double Rectangle::area() const{
    return a*b;
}

double Rectangle::getA() const {
    return a;
}

void Rectangle::setA(double a) {
    Rectangle::a = a;
}

double Rectangle::getB() const {
    return b;
}

void Rectangle::setB(double b) {
    Rectangle::b = b;
}

Rectangle::Rectangle(double a, double b) : a(a), b(b) {}
//Square:
double Square::getA() const {
    return a;
}

void Square::setA(double a) {
    Square::a = a;
}

Square::Square(double a) : Rectangle(a,a), a(a) {}

//Ellipse:
Ellipse::Ellipse(double a, double b): a(a),b(b) {}

double Ellipse::area() const {
    return a*b*M_PI;
}

void Ellipse::setA(double a) {
    this->a = a;
}

double Ellipse::getA() const {
    return  a;
}

// Circle

Circle::Circle(double r): Ellipse(r,r),r(r){}