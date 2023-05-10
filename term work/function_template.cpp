#include<iostream>
using namespace std;
// class temp
// {
//     public:
template <typename T>
T templ(T a, T b)
{
    T sum;
    sum=a+b;
    return sum;
}
// };
int main()
{
    // temp x;
    int x1=templ<int>(2,3);
    cout<<x1;

}