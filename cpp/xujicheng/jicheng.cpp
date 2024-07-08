#include "iostream"

class Anmail
{
private:
    /* data */
public:
    virtual void CallFunc();
};

void Anmail::CallFunc()
{
    std::cout << "no 0000" << std::endl;
}

void CallFunc(Anmail &a)
{
    a.CallFunc();
}


class Dog:public Anmail
{
private:
    /* data */
public:
    virtual void CallFunc() override;
};
void Dog::CallFunc() 
{
    std::cout << "dog" << std::endl;
}


class Cat:public Anmail
{
private:
    /* data */
public:
    virtual void CallFunc() override;
};

void Cat::CallFunc()
{
    std::cout << "cat" << std::endl;
}


int main(int argc, char const *argv[])
{
    /* code */
    Cat c;
    CallFunc(c);
    Dog d;
    CallFunc(d);
    return 0;
}
