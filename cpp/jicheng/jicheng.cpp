#if 1
#include "iostream"

class A
{
private:
    /* data */

public:
    int a;
    // A()
    // {
    //     std::cout << "A Constructor---- " << std::endl;
    // };
    A(int x):a(x)
    {
        std::cout << "A Constructor " << a << std::endl;
    }
    virtual ~A(){} 
};


class B :virtual public A
{
private:
    /* data */
   
public:
    int b;
    B(int x=0,int b=0):A(x),b(b)
    {
        std::cout << "B Constructor " << a << b << std::endl; 
    };
};

class C:virtual public A
{
private:
    /* data */
public:
    int c;
    C(int x=0,int c=0):A(x),c(c)
    {
        std::cout << "C Constructor " << a << c <<std::endl; 
    };
};

class D:public C,public B
{
private:
    /* data */
public:
    int d;
    D(int x=0,int b=0,int c=0,int d=0):A(x),B(b,b),C(c,c),d(d)
    {
        std::cout << "D Constructor " << std::endl; 
    };
};

class Base {

public:

    Base(int x) {} // 确保Base有一个接受int参数的构造函数

};


class Derived1 : virtual public Base {

public:

    Derived1(int x) : Base(x) {} // 正确地初始化Base

};


class Derived2 : virtual public Base {

public:

    Derived2(int x) : Base(x) {} // 同样正确地初始化Base

};


class Final : public Derived1, public Derived2 {

public:
    Final(int x) :Base(x) , Derived1(x), Derived2(x) {} // 通过Derived1和Derived2间接初始化Base

};






int main(int argc, char const *argv[])
{
    D d(1,2,3,4);
    std::cout << d.a << std::endl;
    B b(5,2);
    std::cout << b.a << std::endl;
    std::cout << d.a << std::endl;
    d.B::a = 10;
    std::cout << d.B::a << std::endl;
    std::cout << d.a << std::endl;
    return 0;
}

#else

#include <iostream>


// 基类 Shape

class Shape {

protected:

    int x, y;

public:

    Shape(int xCoord, int yCoord) : x(xCoord), y(yCoord) {

        std::cout << "Shape constructor called." << std::endl;

    }

    virtual ~Shape() {}

    virtual void draw() const = 0; // 纯虚函数

};


// 虚继承 Shape 的 Circle 类

class Circle : virtual public Shape {

public:

    Circle(int xCoord, int yCoord, int radius) : Shape(xCoord, yCoord), radius(radius) {

        std::cout << "Circle constructor called." << std::endl;

    }
    void draw() const override {

        std::cout << "Drawing Circle at (" << x << "," << y << ") with radius " << radius << std::endl;

    }
private:

    int radius;



};


// 虚继承 Shape 的 Square 类

class Square : virtual public Shape {

public:

    Square(int xCoord, int yCoord, int side) : Shape(xCoord, yCoord), side(side) {

        std::cout << "Square constructor called." << std::endl;

    }
    void draw() const override {

        std::cout << "Drawing Square at (" << x << "," << y << ") with side " << side << std::endl;

    }
private:

    int side;



};


// 同时继承自 Circle 和 Square 的类，由于 Shape 被虚继承，所以不会有数据冗余

class CircleSquare : public Circle, public Square {

public:

    CircleSquare(int xCoord, int yCoord, int radius, int side)

        : Shape(xCoord, yCoord),Circle(xCoord, yCoord, radius), Square(xCoord, yCoord, side) {

        std::cout << "CircleSquare constructor called." << std::endl;

    }

    // 注意：这里没有draw()函数，但可以通过Circle或Square的draw()实现绘图功能
        void draw() const override {

        std::cout << "Drawing ddddd at (" << x << "," << y << ") with side "<< std::endl;

    }
};


int main() {

    CircleSquare cs(10, 20, 5, 10);

    // 注意：直接调用draw()会有二义性，因为Circle和Square都有draw()函数

    // 但可以通过强制转换来调用特定的draw()，例如：

    static_cast<Circle*>(&cs)->draw();  // 通过Circle绘制

    static_cast<Square*>(&cs)->draw();   // 通过Square绘制


    return 0;

}





#endif



