#include <iostream>
#include <string>
#include "MyString.h"
using namespace std;

void DisplayString(const MyString& obj)
{
	cout << obj << endl;
	//cout << obj.get_str() << endl;
	MyString sTemp("Temporary data");
	cout << sTemp << endl;

	int x = 10;
}

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
	cout << s2 << endl;
	s2 = s4;
	cout << s2 << endl;


	DisplayString(s4);

	const MyString s6("Constant Data");
	DisplayString(s6);


	//cout << s6.get_str();
	//cout.operator<<(s6.get_str())
	s6.get_str();

	{
		MyString s7("Scoped object");
	}

	cout << "End of function" << endl;

	return 0;
}