#include <iostream>
#include "Stack.h"
using namespace std;

int main()
{
	cStack s1;

	s1.Push(5);
	s1.Push(5);
	s1.Push(5);
	s1.Push(5);
	s1.Push(5);
	s1.Push(5);

	cout << s1.Pop() << endl;
	cout << s1.Pop() << endl;
	cout << s1.Pop() << endl;
	cout << s1.Pop() << endl;
	cout << s1.Pop() << endl;

	return 0;
}