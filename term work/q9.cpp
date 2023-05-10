#include<iostream>
using namespace std;
class sum1
{
public:
    void sum(int a,int b, int c)
    {
        int x=a+b+c;
        cout<<"Sum: "<<x<<endl;
    }
};
class sum2
{
public:
    void sum(int a,int b, int c)
    {
        int x=a+b+c;
        cout<<"Sum: "<<x<<endl;
    }
};
int main()
{
    sum1 s1;
    sum2 s2;
    s1.sum(2,3,4);
    s2.sum(3,5,8);
 return 0;
}