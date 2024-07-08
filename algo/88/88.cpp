#include "iostream"
#include <gtest/gtest.h>
#include "88.hpp"

template <typename T>
T add(T a,T b)
{
    return a+b;
}

void Solution::merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
{
    nums1.erase(nums1.begin()+m,nums1.end());
    std::vector<int>::iterator it = nums1.begin();
    
    for(int i = 0;i < n;i++)
    {   
        std::vector<int>::iterator it = nums1.begin();
        for(;it != nums1.end();it++)
        {   
            if(*it >= nums2.at(i))
            {
                nums1.insert(it,nums2.at(i));
                break;
            }
        }
        if(it == nums1.end())
        {
            nums1.insert(it,nums2.at(i));
        }
    }

}
  


int main(int argc, char **argv)
{
    std::vector<int> nums1{1,2,3,0,0,0};
    std::vector<int> nums2{2,5,6};
    
    Solution s;
    s.merge(nums1,3,nums2,3);

    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();

    // return 0;
}


