#include <iostream>
#include "Complex.h"
#include "Complex.h"
using namespace std;

int main()
{
	Complex c1, c2(2, 5);

	cout << "C1 --> " << c1.get_str() << endl;
	cout << "C2 --> " << c2.get_str() << endl;

	Complex c3(4);
	cout << "C3 --> " << c3.get_str() << endl;

	//Complex c4(4, 7);
	Complex* ptr = new Complex(4, 7);
	cout << "ptr --> " << ptr->get_str() << endl;

	Complex c4;
	cout << "C4 --> " << c4.get_str() << endl;
	c4.setReal(c2.getReal());
	c4.setImag(c2.getImag());
	cout << "C4 --> " << c4.get_str() << endl;

	Complex c5;

	c5 = c2;  // c5.operator=(c2)
	
	cout << "C5 --> " << c5.get_str() << endl;
	Complex& c6 = c5;

	if (&c4 == &c5)
		cout << "Same" << endl;
	else
		cout << "Different" << endl;

	Complex c7 = c2;	// copy ctor   || Complex(const Complex& c2)

	Complex c8(c2);		// copy ctor


	int i;		//definition of i
	i = 10;		// assigning the value 10 to i

	int j = 10;	// initialising j with the value 10

	cout << "-----------------" << endl;

	Complex c9 = c2 + c3;
	//c2 + c3;  -->  c2.operator+(c3)
	//c2.operator+(c3) --> res

	// Complex c9 = res;

	cout << "C9 --> " << c9.get_str() << endl;

	Complex c10;
	cout << "##################" << endl;
	c10 = ++c9;	// c9.operator++()
	cout << "##################" << endl;
	cout << "C10 --> " << c10.get_str() << endl;
	//c10 = c9++;	// c9.operator++(int)


	//int a;
	//a = 10;
	//int b = 20;
	//int c = a;

	//int d(a);
	//int e(10);


	cout << "End of fucntion... Returning now!" << endl;
	return 0;
}