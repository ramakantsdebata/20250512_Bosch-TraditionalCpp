#include <iostream>
using namespace std;


void Test1()
{
	int a = 10;
	const int b = 20;

	cout << a << " " << b << endl;
}

void Test2()
{
	const int a = 10;
	const int* p1 = &a;
	cout << *p1 << endl;
	//*p1 = 100;

	int b = 10;
	const int * p2 = &b;	// pointer to a constant integer
	cout << *p2 << endl;
	
	int c = 50;
	p2 = &c;
	cout << *p2 << endl;
	//*p2 = 1000;
	int * const p3 = &c;  // const pointer to an non constant integer

	const int * const p4 = &c; //const pointer to an integer constant

	int const * const p5 = &c; //const pointer to a constant integer

	int *c1, c2, c3;
	int *d1, *d2, *d3, d4;
	c = 20;
}


void Test3(int x)  //Receive the r-value of 'a'
{
	// work
	x = 20;
}

void Test4(int* ptr) //Receive the l-value of 'a'
{
	//work
	cout << ptr << endl;
}

void Test5(int& ref) //Receive the r-value and l-value of 'a'
{
	cout << &ref << endl;
	cout << ref << endl;
}

void Test6()
{
	int a = 10;
	Test3(a);
	Test4(&a);

	cout << &a << endl;
	Test5(a);

	int& r1 = a;
	//int& r2;
	//r2 = a;

	const int& cr1 = a;

	a = 10;
	//cr1 = 10;

	const int& const cr2 = a;
	//int d = 20;
	//r1 = d;
	//&r1 = d;
}


void Test7(const int& x)
{
	//work
}

int main()
{
	int a = 10;
	Test7(a);
	Test7(10);

	//int& r1 = 10;
	const int& r2 = 10;
	
	int c;
	c = r2 + 1;

	return 0;
}