#include<iostream>
using namespace std;
class x
{
public:
int a=20;
int b=30;
void operator ++()
    {
        a++;
        
        b++;
        
    }
    void operator --()
    {
        a--;
        b--;
    }
    void display()
    {
    cout<<"a="<<a<<"b="<<b<<endl;;
    }
};
int main()
{
    x x1;
    ++x1;
    x1.display();
    --x1;
    --x1;
    x1.display();
 return 0;
}