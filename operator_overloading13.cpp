#include<iostream>
using namespace std;
class ope 
{
public:
int side;
void ty()
{

cout<<"Enter the side";
cin>>side;
}
void operator *()
{
    side=side*side;
}
void display()
{
    cout<<"side: "<<side;

}
};
int main()
{
    ope o1;
    o1.ty();
    *o1;
    o1.display();
 return 0;
}