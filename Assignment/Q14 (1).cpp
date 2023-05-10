#include <iostream>
using namespace std;

class Sample
{
    public:
        string name;
        int rollno;
        string sec;
        void display()
        {
            cout<<"Name : "<<name<<endl<<"Roll number : "<<rollno<<endl<<"Section : "<<sec<<endl;
        }
};
int main()
{
    Sample* s1;
    cout<<"Enter name: ";
    cin>>s1->name;
    cout<<"Enter rollno: ";
    cin>>s1->rollno;
cout<<"Enter sec: ";
    cin>>s1->sec;
    s1->display();
    return 0;
}