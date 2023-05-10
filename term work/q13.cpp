#include<iostream>
using namespace std;
class temp
{
public:
int a,b;
    void get()
    {
        cout<<"enter the first num:";
        cin>>a;
        cout<<"Enter the second num: ";
        cin>>b;
    }
    void operator++()
    {
        a++;
        b++;
    }
    void operator--()
    {
        a--;
        b--;
    }    
    void display()
        {
                cout<<"\n A : "<<a;
                cout<<"\n B : "<<b;
        }
};
int main()
{
    temp t1;
    t1.get();
    ++t1;
    cout<<"After Increment";
    t1.display();
    --t1;
    --t1;
    cout<<"\nAfter Decrement";
    t1.display();
    

 return 0;
}