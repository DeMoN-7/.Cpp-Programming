#include<iostream>
using namespace std;
class complex
{
    public:
    int num1,num2;
    void accept()
    {
        cout<<"\n Enter Two Complex Numbers : ";
                cin>>num1>>num2;
    }
    complex operator+(complex c)
    {
        complex c1;
        c1.num1=num1+c.num1;
        c1.num2=num2+c.num2;
        return c1;
    }
    void display()
    {
        cout<<num1<<"+"<<num2<<"i"<<endl;
    }
};
int main()
{
    complex obj1,obj2,sum;

    obj1.accept();
    obj2.accept();
    
    obj1.display();
    obj2.display();
    cout<<"\n Addition of Real and Imaginary Numbers : \n";
    cout<<"\t";
    sum=obj1+obj2;
    sum.display();


}