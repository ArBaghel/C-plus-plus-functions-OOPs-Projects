//Virtual Function
/*In C++, We may not be able to override functions if we use pointer of the base class to point to an object of the derived class*/
#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void print()
    {
        cout<<"Base Function";
    }
};

class Derived:public Base
{
    public:
    void print()
    {
        cout<<"Derived Function";
    }
};

int main()
{
    Derived z;
    z.print();
    return 0;
}