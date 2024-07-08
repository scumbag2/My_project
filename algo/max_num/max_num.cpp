#include "iostream"
#include <vector>
#include <gtest/gtest.h>
#include <algorithm>
using namespace std;

class max_num
{
private:
    /* data */
public:
    max_num(/* args */);
    ~max_num();
    string max_num_res(vector<int>& nums);
    static bool cmp(int a ,int b); 
};


string max_num::max_num_res(vector<int>& nums)
{
    sort(nums.begin(),nums.end(),cmp);
    string ret = "";
    for(auto num:nums)
    {
        ret = ret + to_string(num);
    }
    return ret;

}
bool max_num::cmp(int a ,int b)
{
    string sa = to_string(a);
    string sb = to_string(b);

    return sa + sb > sb + sa;
} 


max_num::max_num(/* args */)
{
}

max_num::~max_num()
{
}

TEST(max_num,test1)
{
    max_num m;
    string s = "22221";
    vector<int> v = {22,221};
    EXPECT_EQ(m.max_num_res(v),s);
}

TEST(max_num,test2)
{
    max_num m;
    string s = "9999458941425101";
    vector<int> v = {4589,101,41425,9999};
    EXPECT_EQ(m.max_num_res(v),s);
}

int main(int argc, char const *argv[])
{

      

    testing::InitGoogleTest();

    RUN_ALL_TESTS();
    return 0;
}
