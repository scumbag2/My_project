#include "iostream"
#include <vector>
#include <gtest/gtest.h>
#include "string"

using namespace std;

class char_class
{
private:
    /* data */
public:
    char_class(/* args */);
    ~char_class();
    int sum(int c,int b,vector<int> a);

    
};

char_class::char_class(/* args */)
{
}

char_class::~char_class()
{
}

int solution(int a)
{
    
    return (a&0x000000FF) + (a >> 8 &0x000000FF) + (a >> 16 &0x000000FF) + (a >> 24 &0x000000FF);
}


int char_class::sum(int c,int b,vector<int> a)
{
    int *num = new int[b];
    memset(num,0,sizeof(int)*b);
    for(auto s=a.begin();s != a.end();s++)
    {
        
        if((solution(*s) % b) < c)
        {
            num[(solution(*s) % b)] ++;
        }

    }
    int num_tmp = -1;
    for(int i = 0;i < b;i++)
    {
        if(num[i] > num_tmp)
        {
            num_tmp = num[i];
        }
    }
    delete []num;
    cout  << num_tmp  << endl;
    return num_tmp;

}

int main(int argc, char  **argv)
{
    vector<int> a;
    int b,c;
    cin >> c; 
    cin >> b;
    int tmp;
    int  i = 0;
    while(i < 10)
    {
        cin >> tmp;
        {
            a.emplace_back(tmp);
        }
        i++;
    }
    for(auto v = a.begin();v != a.end();v++)
    {
        cout  << *v << " ";
    }
    cout  << endl;

    char_class x;
    x.sum(c,b,a);

    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
    return 0;
}
