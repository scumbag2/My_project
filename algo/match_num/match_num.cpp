/*
题目描述

给定一个正整数数组，检查数组中是否存在满足规则的数字组合

规则：A = B + 2C
输入描述

第一行输出数组的元素个数。

接下来一行输出所有数组元素，用空格隔开。
输出描述

如果存在满足要求的数，在同一行里依次输出规则里A/B/C的取值，用空格隔开。

如果不存在，输出0。

备注
数组长度在3-100之间。
数组成员为0-65535，数组成员可以重复，但每个成员只能在结果算式中使用一次。如：数组成员为[0, 0, 1, 5]，0出现2次是允许的，但结果0 = 0 + 2 * 0是不允许的，因为算式中使用了3个0。
用例保证每组数字里最多只有一组符合要求的解。
用例

输入
4
2 7 3 0

输出 7 3 2
说明 7 = 3 + 2 * 2
输入 3
1 1 1
输出 0
说明 找不到满足条件的组合
*/





#include "iostream"
#include <vector>
#include <gtest/gtest.h>
#include "string"
#include "algorithm"

using namespace std;
int count1 = 0;


class match_num
{
private:
    /* data */
public:
    match_num(/* args */);
    ~match_num();
    vector<int> num_match(vector<int> v);
};

match_num::match_num(/* args */)
{
}

match_num::~match_num()
{
}


vector<int> match_num::num_match(vector<int> v)
 {
    bool flag = 0;
    vector<int> res;
    for(auto vv = v.begin();vv != (v.end() - 2);vv++)
    {
        flag = 0;
        vector<int> v1 ;
        v1.assign(vv+1,v.end());
        for(auto vv1 = v1.begin();vv1 != (v1.end() - 1);vv1++)
        {
            vector<int> v2 ;
            v2.assign(vv1+1,v1.end());
            for(auto vv2 = v2.begin();vv2 != (v2.end());vv2++)
            {
                if(*vv == (*vv1+(*vv2)*2))
                {
                    res.push_back(*vv);
                    res.push_back(*vv1);
                    res.push_back(*vv2);
                    return res;
                }
                else if(*vv > (*vv1+(*vv2)*2))
                {
                    break;
                    flag = 1;
                }
                count1++;
            }
            if(flag == 1)
            {
                break;
            }
        }
    }
    return res;
 }



// template <typename T> 
bool comp(int  t1,int t2)
{
    return t1 > t2;
}

int main(int argc, char  **argv)
{
    vector<int> v;
    vector<int> res;

    int num;
    cin >>num;

    while(num > 0)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
        num --;
    }


    sort(v.begin(),v.end(),comp);

    match_num m;
    res = m.num_match(v);

    if(res.size() > 0 )
    {
        for(auto vv:res)
        {
            cout << vv << " " ;
        }
        cout << endl;
       
    }
    else
    {
        cout << 0 << endl;
    }
    cout << count1 <<endl;



    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
    return 0;
}

