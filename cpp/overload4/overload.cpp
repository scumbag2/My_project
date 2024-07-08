#include "iostream"

class Ctest
{
private:
    /* data */
    double l;
    double b;
    double h;
public:
    Ctest():l(0),b(0),h(0)
    {
        std::cout << "Ctest --" << std::endl;
    };
    Ctest(double len,double breadth,double hight):l(len),b(breadth),h(hight) {};
    ~Ctest()
    {
        std::cout << "~Ctest --" << std::endl;
    };
    void disp()
    {
        std::cout << "l b h " << l << " "<< b << " " << h << " " << std::endl;
    }
    Ctest operator+(const Ctest& c)
    {
        Ctest ctest;
        ctest.b = this->b + c.b;
        ctest.l = this->l + c.l;
        ctest.h = this->h + c.h;
        return ctest;
    }
    Ctest operator++()
    {
        std::cout << "前置" << std::endl;
        Ctest a;
        a.l = ++l;
        return a;
        
    }
    Ctest operator++(int)
    {
        std::cout << "后置" << std::endl;
        Ctest a;
        a.l = l++;
        return a;
    }
    
    double getl()
    {
        return l;
    }

    double getb()
    {
        return b;
    }

    double geth()
    {
        return h;
    }

    void setl(double l)
    {
        this->l=l;
    }

    void setb(double b)
    {
        this->b=b;
    }

    void seth(double h)
    {
        this->h=h;
    }




};

class CtestB :public Ctest
{
private:
    /* data */
    float x; 
public:
    CtestB ():x(0)
    {
        std::cout << "CtestB --" << std::endl;
    };
    CtestB (float m):x(m)
    {
        std::cout << "CtestB --1" << std::endl;
    };
    ~CtestB ()
    {
        std::cout << "~CtestB --" << std::endl;
    };


    void disp()
    {
        std::cout << "l b h x  " << getl() << " "<< getb() << " " << geth() << " " << x << " "  << std::endl;
    }
};



int main(int argc, char const *argv[])
{
    // Ctest a;
    // // Ctest c(20,30,40);
    // // Ctest b(10,10,10);

    // // a = c+b;
    // a++;
    // a.disp();
    // ++a;
    // a.disp();

    CtestB b(1.0);
    b.setb(10);
    b.Ctest::disp();
    return 0;
}
