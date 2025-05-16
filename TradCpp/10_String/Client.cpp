#include <iostream>
#include <string>
#include "MyString.h"
using namespace std;


int main()
{
	const char* ptr = "Test";

	MyString s1(ptr);
	MyString s2(ptr);

	cout << s1.length() << endl;
	cout << s1.get_str() << endl;

	//-------------------------------------

	MyString s3("Data");
	MyString s4 = s1 + s3;
	cout << "String --> " << s4 << endl;

	MyString s5(s4);

	cout << s5 << endl;

	cout << "------------------" << endl;
	cout << s4 << endl;
	s4 = s2;
	cout << s4 << endl;

	return 0;
}