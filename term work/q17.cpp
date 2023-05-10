#include<iostream>
using namespace std;
template <typename t>
class temp
{
    t a,b;
    public:
    t max1(t a1,t b1)
    {
         a=a1;
         b=b1;
        if (a1>b1)
        {
            return a;
        }
        else
        {
            return b;
        }
    }
};
int main()
{
    temp <int> t;
    int x=t.max1(2,3);
    cout<<x<<" is greater"<<endl;
    
    temp <float> t2;
    float z=t2.max1(2.2,2.1);
    cout<<z<<" is greater";
}
// #include<iostream>
// using namespace std;
// template <typename t>
// class temp
// {
//     t a,b;
//     public:
//     void set_data(t x,t y)
//     {
//         kg=x;
//     }
//     t get_data()
//     {
//       return kg;  
//     }
// };