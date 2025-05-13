#include <iostream>
using namespace std;

int& Baz(int& data)
{
	cout << "Baz" << endl;
	return data;
}

int& Bar(int& data)
{
	cout << "Bar" << endl;
	Baz(data);
	return data;
}

int& Foo(int& data)
{
	cout << "Foo" << endl;
	Bar(data);
	return data;
}

int main()
{
	int a = 10;
	cout << "Main" << endl;
	Foo(a);

	return 0;
}

