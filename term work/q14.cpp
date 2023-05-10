#include<iostream>
using namespace std;
class complex
{
public:
int a,b;
    void accept()
    {
        cout<<"enter the number 1";
        cin>>a;
        cout<<"enter the second number";
        cin>>b;
    }
    complex operator +(complex c1)
    {
        complex c;
        c.a=a+c1.a;
        c.b=b+c1.b;
        return c;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }

};
int main()
{
    complex c1, c2, sum; //Created Object of Class Complex i.e c1 and c2

        c1.accept();  //Accepting the values
        c2.accept();

        sum = c1+c2;   //Addition of object

        cout<<"\n Entered Values : \n";
        cout<<"\t";
        c1.display();    //Displaying user input values
        cout<<"\t";
        c2.display();

        cout<<"\n Addition of Real and Imaginary Numbers : \n";
        cout<<"\t";
        sum.display();  //Displaying the addition of real and imaginary numbers

 return 0;
}