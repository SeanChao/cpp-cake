//
// Created by SeanC on 2018/12/14.
//

#ifndef SHAPE_SHAPES_H
#define SHAPE_SHAPES_H

//ABC: Shape
class Shape {
public:
    virtual double area() const=0;
};



class Triangle: public Shape {
private:
    double a=0,b=0,c=0;
public:
    Triangle(double a, double b, double c);

    double getA() const;

    void setA(double a);

    double getB() const;

    void setB(double b);

    double getC() const;

    void setC(double c);

    double area() const;
};



class Rectangle: public Shape{
private:
    double a=0,b=0;
public:
    Rectangle(double a, double b);

    double getA() const;

    void setA(double a);

    double getB() const;

    void setB(double b);

    double area() const;

};



class Square: public Rectangle{
private:
    double a;
public:
    Square(double a);

    double getA() const;

    void setA(double a);
};



class Ellipse: public Shape{
private:
    double a,b;
public:
    Ellipse(double a, double b);

    double area() const ;

    void setA(double a);

    double getA() const;
};



class Circle: public Ellipse{
private:
    double r;
public:
    Circle(double r);

    void setR(double r);

    double getR(double r);

};


#endif //SHAPE_SHAPES_H
