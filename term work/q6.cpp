#include<iostream>
using namespace std;
class prime 
{
public:
    int x=0;
    prime(int n)
    {
        for (int i=2;i<n/2;i++)
        {
            if (n%i==0)
            {
                 x=1;
            }

        }
        if (x==1)
        {
            cout<<n<<" is not prime"<<endl;
        }
        else
        {
            cout<<n<<" is prime"<<endl;
        }
    }
};
int main()
{
    prime p1(5);
    prime p2(22);
    prime p3(7);
    prime p4(9);
    
 return 0;
}