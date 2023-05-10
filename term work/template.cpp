#include<iostream>
using namespace std;
template <typename t>
class temp
{
    t kg;
    public:
    void set_data(t x)
    {
        kg=x;
    }
    t get_data()
    {
      return kg;  
    }
};
int main()
{
    temp <int> x;
    x.set_data(22);
    int z=x.get_data();
    cout<<z;
    temp <float> x1;
    x1.set_data(22.22);
    float z1= x1.get_data();
    cout<<"\n"<<z1;
    temp<char> obj;
    obj.set_data('Ax');
    cout<<endl<<obj.get_data();
}