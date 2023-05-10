#include<iostream>
using namespace std;
class detail 
{
public:
    char name[20];
    int code;
    char address[20];
    int hindi_speed;
    int english_speed;
    void get_detail()
    {
        cout<<"Enter the name: ";
        fflush(stdin);
        cin.getline(name,20);
        cout<<"Enter the code: ";
        cin>>code;
        cout<<"Enter the Address: ";
        fflush(stdin);
        cin.getline(address,20);
        cout<<"Enter the typing speed in hindi:  ";
        cin>>hindi_speed;
        cout<<"Enter the typing speed in english: ";
        cin>>english_speed;

    }
};
class print: public detail
{
    public:
    void print_detail()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Code: "<<code<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Hindi speed: "<<hindi_speed<<endl;
        cout<<"English: "<<english_speed<<endl;
    }
};
int main()
{
    print p;
    p.get_detail();
    p.print_detail();
    
 return 0;
}