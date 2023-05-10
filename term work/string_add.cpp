#include<iostream>
#include<string.h>
using namespace std;
class Strings
{
    char str[20];
    public:
    void get_data()
    {
        cin.getline(str,20);
    }
    int operator ==(Strings s1)
    {
        if(!strcmp(str,s1.str))
        {
            return 0;
        }
        else
        return 1;
    }
};
int main()
{
    Strings s1,s2;
    cout<<"enter the first string ";
    s1.get_data();
    cout<<"enter the second string ";
    s2.get_data();
    if (s1==s2)
    {
        cout<<"Not Same ";
    }
    else
    {
        cout<<"same";
    }
}