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

	MyString s2("Data");
	MyString s3 = s1 + s2;
	cout << "String --> " << s3 << endl;

	return 0;
}