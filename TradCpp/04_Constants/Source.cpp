#include <iostream>
using namespace std;


#define SIZE 100000
#define INTEREST_RATE 10.0
#define ADD(x) (x+2)

//const int SIZE = 10;
//const float INTEREST_RATE = 10.0;


//void Foo(int size)
//{
//	int arr[SIZE];
//	float interest_rate = 12 * INTEREST_RATE;
//	cout << "Declared a variable length array at compile time";
//}
//
//void Bar()
//{
//	//int size = 512
//	//int arr[size];
//	int a = 10;
//	const int b = 20;
//
//	a = 50;
//	//b = 50;
//
//	int* ptr1 = &a;
//	*ptr1 = 100;
//	cout << "[" << ptr1 << "] " << * ptr1 << " --> " << a << endl;
//
//	//const int* ptr2 = &b;
//	//int* ptr2 = (int*)&b;
//	//*ptr2 = 100;
//	//cout << "[" << ptr2 << "] " << *ptr2 << " --> " << b << endl;
//
//	int* pt3 = (int*)&b;
//
//	cout << *pt3 << endl;
//
//	*pt3 = 100;
//	/*b = 200;*/
//	cout << b << endl;
//
//	Foo(100);
//}
//
void Baz()
{
	int res = 10 + SIZE;
	cout << res << endl;

}

int main()
{
	Baz();
	return 0;
}