#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;


struct people
{
    /* data */
    int id;
    int score;
};


class sheji
{
private:
    /* data */
    
public:
    sheji(/* args */);
    ~sheji();
    vector<int> winner(vector<people> v);
    static bool cmp(people p1,people p2);
};

bool sheji::cmp(people p1,people p2)
{
    return p1.id > p2.id;
}

bool cpm1(int a,int b)
{
    return a > b;
}
bool cpm2(people p1,people p2)
{
    return p1.score > p2.score;
}

vector<int> sheji::winner(vector<people> v)
{
    sort(v.begin(),v.end(),cmp);
    int id_tmp = -1;
    people p;
    std::vector<people> deal_res;
    std::vector<int> tmp_score;
    for(auto v_tmp = v.begin();v_tmp != v.end();v_tmp ++)
    {
        if(id_tmp != (*v_tmp).id)
        {
            if(id_tmp != -1)
            {
                if(tmp_score.size()<3)
                {

                }
                else if(tmp_score.size()>3)
                {
                    sort(tmp_score.begin(),tmp_score.end(),cpm1);
                    p.id = id_tmp;
                    p.score = tmp_score[0] + tmp_score[1] + tmp_score[2];
                    deal_res.push_back(p);
                }
                else
                {
                    p.id = id_tmp;
                    p.score = tmp_score[0] + tmp_score[1] + tmp_score[2];
                    deal_res.push_back(p);
                }
            }
            tmp_score.clear();
            id_tmp = (*v_tmp).id;
            cout << id_tmp <<endl;
 
        }
        tmp_score.push_back((*v_tmp).score);    
        if(v_tmp == v.end() -1)
        {
            cout << id_tmp <<endl;
            if(id_tmp != -1)
            {
                if(tmp_score.size()<3)
                {

                }
                else if(tmp_score.size()>3)
                {
                    sort(tmp_score.begin(),tmp_score.end(),cpm1);
                    p.id = id_tmp;
                    p.score = tmp_score[0] + tmp_score[1] + tmp_score[2];
                    deal_res.push_back(p);
                }
                else
                {
                    p.id = id_tmp;
                    p.score = tmp_score[0] + tmp_score[1] + tmp_score[2];
                    deal_res.push_back(p);
                }
            }  
            tmp_score.clear();              
        }
    }

    sort(deal_res.begin(),deal_res.end(),cpm2);
    std::vector<int> winnerid;
    for(auto deal_res1:deal_res)
    {
        winnerid.push_back(deal_res1.id);
        cout << deal_res1.id ;
        cout  << ',';
    }
    cout << endl;
    return winnerid;
}


sheji::sheji(/* args */)
{
    
}

sheji::~sheji()
{
}




int main(int argc, char const *argv[])
{
    int n = 13 ;
    int tmp;
    std::vector<int> id_ever = {3,3,7,4,4,4,4,7,7,3,5,5,5};
    std::vector<int> score_ever = {53,80,68,24,39,76,66,16,100,55,53,80,55};
    std::vector<people> v;
    // for(int i = 0;i < n;i++)
    // {
    //     cin >> tmp;
    //     id_ever.push_back(tmp);
    // }
    // for(int i = 0;i < n;i++)
    // {
    //     cin >> tmp;
    //     score_ever.push_back(tmp);
    // }
    people p;
    for(int i = 0;i < n;i++)
    {
        p.id = id_ever.at(i);
        p.score = score_ever.at(i);
        v.push_back(p);
    }

    sheji s;
    s.winner(v);

    return 0;
}
