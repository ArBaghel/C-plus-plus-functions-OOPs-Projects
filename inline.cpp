// C++ Program to demonstrate inline functions and classes
#include <iostream>

using namespace std;

class operation {
	int a, b, add, sub;

public:
	void get();
	void sum();
	void difference();
};
inline void operation ::get()
{
	cout << "Enter first value:";
	cin >> a;
	cout << "Enter second value:";
	cin >> b;
}

inline void operation ::sum()
{
	add = a + b;
	cout << "Addition of two numbers: " << a + b << "\n";
}

inline void operation ::difference()
{
	sub = a - b;
	cout << "Difference of two numbers: " << a - b << "\n";
}



int main()
{
	cout << "Program using inline function\n";
	operation s;
	s.get();
	s.sum();
	s.difference();
	return 0;
}