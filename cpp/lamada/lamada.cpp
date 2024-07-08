#include "iostream"
#include "algorithm"
#include "functional"
using namespace std;

void FuncB(function<void()> funcb){funcb();}
void FuncC(function<int()> funcc){funcc();}

typedef void(*func)(int);
int funcAA(func p)
{
    int a = 10; 
    p(a);
    return 0;
}

void say(int a)
{
    cout << "say ----  " << a << endl;
    return ;
}

void say1()
{
    cout << "say ----  " << endl;
    return ;
}

int main(int argc, char const *argv[])
{

    int x=20,y=40;
    auto funxc = [&]()->int{
        int a = x+1;
        x++;
        y++;
        std::cout << a << " " << y << std::endl;
        return 0;
    };
    funxc();
    
    funcAA(&say);

    FuncB(&say1);

    FuncC(funxc);
    cout << x << " " << y << endl;


    // int  x = 30;
    const int a = x;
    constexpr int b = 30;


    char A[a];
    char B[b];

    return 0;
}
