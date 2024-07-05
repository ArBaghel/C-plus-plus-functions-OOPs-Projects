//Program to demonstrate Multi-level inheritance

#include <iostream>
using namespace std;

class getA {
public:
    int a;
    void get_data_A() {
        cout << "Enter value of A: ";
        cin >> a;
    }
};

class B : public getA {
public:
    int b;
    void get_data_B() {
        cout << "Enter value of B: ";
        cin >> b;
    }
};

class C : public B {
public:
    void calculate_average() {
        int average = (a + b) / 2;
        cout << "Average of A and B: " << average << endl;
    }
};

int main() {
    C z;
    z.get_data_A();
    z.get_data_B();
    z.calculate_average();
    return 0;
}
