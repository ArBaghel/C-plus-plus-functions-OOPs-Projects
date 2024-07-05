//Program to demonstrate single inheritance

#include<iostream>
#include<string>
using namespace std;

class ID
{
protected:
    string id;
public:
    void getData1()
    {
        cout<<"Enter id: ";
        cin>>id;
    }
};

class Student : public ID
{
private:
    string sname;
public:
    void getData2()
    {
        cout<<"Enter Student name: ";
        cin.ignore(); // ignore the newline character left in the buffer
        getline(cin, sname);
    }   

    void display()
    {
        cout<<"ID :"<<id<<"\t"<<"Student Name :"<<sname;
    }
};

int main()
{
    Student z;
    z.getData1();
    z.getData2();
    z.display();
    return 0;
}

