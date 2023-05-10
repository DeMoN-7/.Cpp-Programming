#include<iostream>
using namespace std;
class a 
{
public:
    a()
    {
        cout<<"a is called";
    }
    ~a()
    {
        cout<<endl<<"a closed";
    }
};
class b: public a{
public:
b()
{
    cout<<endl<<"b is called";
}
~b()
{
    
        cout<<endl<<"b closed";
}
};

class c: public b
{
    public:
    c()
    {

    cout<<endl<<"c is called";
    }
    ~c()
    {
        
        cout<<endl<<"c closed";
    }
};
int main()
{
    c obj;
 return 0;
}