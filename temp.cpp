#include<iostream>
using namespace std;
class count
{
    int value;
        public:
            count():value(5)
            { 
            }
            void opertor()
            {
                value++;
            }
            void display()
            {
                cout<<"count = "<<value;
            }
};

int main()
    {
        count obj;
        obj.opertor();
        obj.display();

        return 0;
    }