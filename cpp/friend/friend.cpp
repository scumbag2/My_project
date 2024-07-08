#include "iostream"


#define frined_example
#ifdef frined_example
class friendA
{
private:
    /* data */
    int x,y;
public:
    friendA(int a,int b):x{a},y{b}{}
    ~friendA();

    int sum();
    int friend myfriend(friendA &obj);
    friend class friendB;
};

int friendA::sum()
{
    return x+y;
}

int myfriend(friendA &obj)
{
    return obj.x * obj.y;
}

friendA::~friendA()
{  
    std::cout << "~friendA " << std::endl;
} 

class friendB
{
    private:
        int sum;

    public:
        int sumA(const friendA &A);

};

int friendB::sumA(const friendA &A)
{
    sum = A.x * A.y;
    return sum;
}




int main(int argc, char const *argv[])
{
    friendA A(5,6);
    std::cout << "sum " << A.sum() << std::endl;
    std::cout << "muti " << myfriend(A) << std::endl;
    friendB B;
    B.sumA(A);
    std::cout << "muti " << myfriend(A) << std::endl;
    std::cout << "muti " << myfriend(A) << std::endl;
    return 0;
}

#endif



