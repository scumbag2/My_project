#include "iostream"
#include <gtest/gtest.h>
#include "88.hpp"

TEST(merge,eq)
{
    std::vector<int> nums1{1,2,3,0,0,0};
    std::vector<int> nums2{2,5,6};
    Solution s;
    s.merge(nums1,3,nums2,3);
    std::vector<int> res{1,2,2,3,5,6};
    EXPECT_EQ(nums1,res);
}