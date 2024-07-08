#include "iostream"

template <typename T>
inline T const& maxfunc(T const& a,T const& b)
{
    return a > b ? a:b;
}

template <typename TT>
inline TT const& minfunc(TT const&a,TT const&b)
{
    return a < b ? a:b;
}

template <typename T1>
class moban
{
private:
    /* data */
public:

    T1 comparess(T1 a,T1 b)
    {
        return a >b ? a:b;
    }

};




int main(int argc, char const *argv[])
{
    int i = 20,j = 60;
    std::cout << "maxfunc " << maxfunc(i,j) << std::endl;
    std::cout << "minfunc " << minfunc(i,j) << std::endl;
    moban<int> m;
     std::cout << "minfunc " << m.comparess(60,722) << std::endl;
    return 0;
}
