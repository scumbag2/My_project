#include "iostream"


class newdel
{
private:
    /* data */
    char *str1;
public:
    newdel(/* args */);
    ~newdel();
};

newdel::newdel(/* args */)
{
    std::cout << "构造函数" <<  std::endl;
    str1 = new char[10];
}

newdel::~newdel()
{
    std::cout << "析构函数" <<  std::endl;
    delete []str1;
}



int main(int argc, char const *argv[])
{

    newdel obj1; //会主动调用析构函数

    char buffer[100];

    newdel *obj = new (buffer) newdel(); // 不会主动调用析构函数
    
    obj->~newdel();
   // delete obj; //不需要 因为obj指向的buffer的首地址，是一片已知内存，不是new出来的



    return 0;
}
