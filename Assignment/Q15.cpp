#include<iostream>
using namespace std;

namespace A
{
    int x;    
} // namespace A
namespace B
{
    int x;
} // namespace B
int main()
{
    cin>>A::x;
    cin>>B::x;
    cout<<"value of x in scope A is :"<<A::x<<endl;
    cout<<"value of x in scope B is :"<<B::x<<endl;
    return 0;
}