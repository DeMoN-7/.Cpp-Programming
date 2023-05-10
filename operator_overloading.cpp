#include<iostream>
using namespace std;
class a
{
    int a,b;
    public:
    void aa()
    {
        cout<<"enter a";
        cin>>a;
        cout<<"enter the b";
        cin>>b;

    }
    void op()
    {
        a++;
        
        b++;
        
    }
    void op1()
    {
        a--;
        b--;
    }
    void display()
    {
    cout<<"a="<<a<<"b="<<b;
    }
};

int main()
{
    a obj;
    obj.aa();

    obj.op1();
    cout<<"\nafter decrement\n";
    obj.display(); 

    obj.op();
    obj.op();
    cout<<"\nafter increment\n";
    obj.display();
return 0;
}