#include "iostream"
#include <vector>
#include <gtest/gtest.h>
#include "string"

using namespace std;
class char_judge
{
private:
    /* data */
public:
    char_judge(/* args */);
    ~char_judge();

    bool judge_char(string s,string t);
};

char_judge::char_judge(/* args */)
{
}

char_judge::~char_judge()
{
}

bool char_judge::judge_char(string s,string t)
{
    string s_tmp = "";
    auto s_falg = s.begin();
    for(auto s2 = t.begin();s2 != t.end();s2++)
    {
        for(auto s1=s_falg ;s1 != s.end();s1++)
        {
            if(*s2 == *s1)
            {
                s_tmp.push_back(*s2);
                s_falg = s1 + 1;
                break;
            }
            if(s1 == s.end() - 1)
            {
                return false;
            }
        }
    }
    cout << s_tmp << endl;
    cout << t << endl;
    if(s_tmp == t)
    {
        return true;
    }
    
    return false;
}

int main(int argc, char  **argv)
{

    string t = "abc";
    string s = "ahabgdc";

    char_judge c;
    cout << c.judge_char(s,t);
    cout << endl;
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
    return 0;
}
