#include<iostream>
#include<cmath>
using namespace std;
 int main()
 {
    int num;

    do
    {
        cout<<"\n1.Add\n2.Sub\n3.Multiply\n4.Divide\n5.Square\n6.Power\n7.Log\n8.Tan\n9.Sin\n10.Exit";
        cin>>num;
        switch (num)
        {
        case 1:
        {

            int n1,n2;
            cout<<"Enter the first number";
            cin>>n1;
            cout<<"enter the second number";
            cin>>n2;
            cout<<n1+n2;
            break;
        }
        case 2:
        {

            int n1,n2;
            cout<<"Enter the first number";
            cin>>n1;
            cout<<"enter the second number";
            cin>>n2;
            cout<<n1-n2;
            break;
        }
        case 3:
        {
            int n1,n2;
            cout<<"Enter the first number";
            cin>>n1;
            cout<<"enter the second number";
            cin>>n2;
            cout<<n1*n2;
            break;
        }
        case 4:
        {
            int n1,n2;
            cout<<"Enter the first number";
            cin>>n1;
            cout<<"enter the second number";
            cin>>n2;
            cout<<n1/n2;
            break;
        }
        case 5:
        {
            int n1,n2;
            cout<<"Enter the number";
            cin>>n1;
            cout<<n1*n1;
            break;
        }
        case 6:
        {
            int base,power;
            cout<<"Enter Base";
            cin>>base;
            cout<<"Enter Power";
            cin>>power;
            int ans=pow(base,power);
            cout<<ans;
            break;
        }
        case 7:
        {
            
        }

         

        default:
            break;
        }
    } while (num!=9);
    
    return 0;
 }