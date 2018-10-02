#include<iostream>
using namespace std;
class Base
{
    int a;
public:
    Base(int x)
    {
        a=x;
        cout<<"\n Base class constructor is initialized\n";
    }
    void dispa()
    {
        cout<<"\nValue of A\n"<<a;
    }
};
class  Derived:public Base
{
    int b;
public:
     Derived(int x,int y):Base(x),b(y)
     {
         cout<<"\n Derived class constructor is initialized\n";
     }
     void dispb()
     {
         cout<<"\n Value of B\n"<<b;
     }
};
int main()
{
    Derived obj(10,20);
    obj.dispa();
    obj.dispb();
    getchar();
    return 0;
}
