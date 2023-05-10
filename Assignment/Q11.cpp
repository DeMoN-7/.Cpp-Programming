#include<iostream>
using namespace std;

class Sample
{
    private:
        string name;
        int rank;
    public:
        Sample()
        {
            cin>>name;
            cin>>rank;
        }
        void Display()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Rank : "<<rank<<endl; 
        }
        friend void compare(Sample,Sample);
};
    void compare(Sample obj1,Sample obj2)
    {
        if(obj1.rank>obj2.rank)
        {
            cout<<obj1.name<<" is topper."<<endl;
        }
        else if(obj1.rank==obj2.rank)
        {
            cout<<obj1.name<<" and "<<obj2.name<<" is topper."<<endl;
        }
        else
        {
            cout<<obj2.name<<" is topper."<<endl;
        }
    }
int main()
{
    Sample A;
    Sample B;
    compare(A,B);
    return 0;
}
