#include "iostream"
#include <vector>
#include <gtest/gtest.h>
#include "string"

using namespace std;


class console
{
private:
    /* data */
public:
    console(/* args */);
    ~console();
    int output(string s);
};

console::console(/* args */)
{
}

console::~console()
{
}

int console::output(string s)
{
    int num = 0;
    int copy_flag = 0;
    int copy_num = 0;
    int cut_flag = 0;
    int all_flag = 0;
    int cover_flag = 0;


    for(auto st = s.begin();st != s.end();st++)
    {
        cout << *st << endl;
        if(*st == '1')
        {
            if(cover_flag == 1)
            {
                num = 1;
                cover_flag = 0;
            }else
            {
                num++;
            }
        }
        if(*st == '2')
        {
            copy_flag = 1;
            cut_flag = 0;
        }
        if(*st == '3')
        {
            copy_flag = 0;
            cut_flag = 1;
            if(cover_flag == 1)
            {
                num = 0;
                cover_flag = 0;  
            }
        }
        if(*st == '4')
        {
            if(cut_flag = 1 || copy_flag == 1)
            {
                if(cover_flag == 1)
                {
                    num = copy_num;
                }
                else
                {
                    num = num+copy_num;
                }
                
                cut_flag = 0;
                copy_flag = 1;
                cover_flag = 0;
            }
        }  
        if(*st == '5')
        {
            copy_num = num;
            cover_flag = 1;
        } 
    }


    return num;
}

int main(int argc, char  **argv)
{
    console c;
    cout << c.output("11153414111");
    cout << endl;
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
    return 0;
}


