#include "iostream"
#include <vector>
#include <gtest/gtest.h>

class char_split
{
private:
    /* data */
public:
    char_split(/* args */);
    ~char_split();
    std::string split(int num,std::string s);

};

char_split::char_split(/* args */)
{
}

char_split::~char_split()
{
}

std::string char_split::split(int num,std::string s)
{
    int flag = 0;
    std::string s1 = "";
    std::string s_tmp = "";
    for(auto it = s.begin();it!=s.end();it++)
    {
        if(*it == '-')
        {
            if(flag == 0)
            {
                flag = 1;
            }
                     
        }
        else
        {
            if(flag == 1)
            {
                s_tmp.push_back(*it);
            }
            else
            {
                s1.push_back(*it);
            }
        }
    }
    std::cout << s1 << std::endl;
    std::cout << s_tmp << std::endl;

    std::string s_min;
    int i = 1;
    for(auto it = s_tmp.begin();it != s_tmp.end();it++)
    {        
        s_min.push_back(*it);
        if(i % num == 0)
        {    
            int min =0;
            int max =0;
            s1.push_back('-');
            for(auto itr = s_min.begin();itr != s_min.end();itr ++)
            {
                if(*itr >= 'A' && *itr <= 'Z')
                {
                    max++;
                }
                if(*itr >= 'a' && *itr <= 'z')
                {
                    min++;
                }
            }

            if(max>min)
            {
                for(auto itr = s_min.begin();itr != s_min.end();itr ++)
                {
                    if(*itr >= 'a' && *itr <= 'z')
                    {
                        *itr = *itr - 32;
                    }
                }
            }
            if(max<min)
            {
                for(auto itr = s_min.begin();itr != s_min.end();itr ++)
                {
                    if(*itr >= 'A' && *itr <= 'Z')
                    {
                        *itr = *itr + 32;
                    }
                }
            }
            s1.append(s_min);
            s_min = "";
        }
        
        if((s_tmp.size()) == i)
        {
            int min =0;
            int max =0;
            s1.push_back('-');
            for(auto itr = s_min.begin();itr != s_min.end();itr ++)
            {
                if(*itr >= 'A' && *itr <= 'Z')
                {
                    max++;
                }
                if(*itr >= 'a' && *itr <= 'z')
                {
                    min++;
                }
            }
            if(max>min)
            {
                for(auto itr = s_min.begin();itr != s_min.end();itr ++)
                {
                    if(*itr >= 'a' && *itr <= 'z')
                    {
                        *itr = *itr - 32;
                    }
                }
            }
            if(max<min)
            {
                for(auto itr = s_min.begin();itr != s_min.end();itr ++)
                {
                    if(*itr >= 'A' && *itr <= 'Z')
                    {
                        *itr = *itr + 32;
                    }
                }
            }
            s1.append(s_min);
            s_min = "";
        }
        i++;
    } 
    std::cout << s1 << std::endl;
    return s1;
}


TEST(test1,test)
{
    char_split m;
    std::string s1 = "12abc-abCABc4aB@";
    std::string s2 = m.split(12,"12abc-abCABc-4aB@");
    std::cout << s2 << std::endl;
    EXPECT_EQ(s2,s1);
}

TEST(test2,test)
{
    char_split m;
    std::string s1 = "12abc-abc-ABC-4aB-@";
    std::string s2 = m.split(3,"12abc-abCABc-4aB@");
    std::cout << s2 << std::endl;
    EXPECT_EQ(s2,s1);
}

int main(int argc, char  **argv)
{

    // char_split c;
    // std::string x = c.split(12,"12abc-abCABc-4aB@");
    // std::cout << x << std::endl;
    char_split m;   
    std::string s1;
    s1 = "12abc-abCABc4aB@";
    std::string s2 ;
    s2 = m.split(3,"12abc-abCABc-4aB@");
    std::cout << s2 << std::endl;
    s1 = "12abc-abc-ABC-4aB-@";
    s2 = "";
    s2= m.split(12,"12abc-abCABc-4aB@");
    
    std::cout << s2 << std::endl;

    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
    return 0;
}
