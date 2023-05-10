#include<iostream>
using namespace std;
class Employe
{
    private:
        string name;
        int age;
        string ecode;
    public:
        Employe(string name,int age,string ecode)
        {
            this->name=name;
            this->age=age;
            this->ecode=ecode;
        }
        void Display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;
            cout<<"Ecode : "<<ecode<<endl;
        }
        friend int operator-(Employe,Employe);
};
    int operator-(Employe e1,Employe e2)
    {
        if(e1.age>e2.age)
            return (e1.age-e2.age);
        else
            return (e2.age-e1.age);
    }

int main()
{
    Employe e1("Nitin", 30, "E001");
    Employe e2("Amit", 25, "E002");
    int diff=e1-e2;
    cout<<"Age difference between employe1 and employe2 is "<<diff<<endl;
    return 0;
}    