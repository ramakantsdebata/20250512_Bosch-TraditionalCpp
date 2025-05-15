#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream>
//#include <cstring>
using namespace std;

struct Student
{
	int iRoll;
	char szName[20];

private:
	int age;

public:
	void setAge(int val)
	{
		age = val;
	}
	int getAge()
	{
		return age;
	}
};

void Test1()
{
	Student s1;// = { 12, "Test" };
	s1.iRoll = 12;
	strcpy(s1.szName, "Test");
	cout << strlen(s1.szName) << endl;
	//s1.szName = "Test";

	cout << s1.iRoll << " --> " << s1.szName << endl;


	s1.setAge(10);
	cout << s1.getAge() << endl;
}


class Complex
{
	int mReal;
	int mImag;

public:
	Complex()
	{
		mReal = 0;
		mImag = 0;
	}

	Complex(int real, int imag)
	{
		mReal = real;
		mImag = imag;
	}

	void setReal(int val)
	{
		mReal = val;
	}

	int getReal()
	{
		return mReal;
	}

	void setImag(int val)
	{
		mImag = val;
	}

	int getImag()
	{
		return mImag;
	}

	//void display()
	//{
	//	cout << mReal << " + i" << getImag() << endl;
	//}

	string get_str()
	{
		//cout << mReal << " + i" << getImag() << endl;
		
		// C-Style coversion to string //////////////////////////
		//create a char* ptr
		//allocate enough space
		//user sprintf to populate the string
		//return the string (address of the memory allocated)

		// C++ - style conversion to string
		stringstream sstr;
		sstr << mReal << " + i" << getImag() << endl;
		string repr = sstr.str();

		return repr;
	}

};

void Test2()
{
	Complex c1;
	//cout << c1.getReal() << " + i" << c1.getImag() << endl;
	//c1.display();
	c1.setReal(2);
	c1.setImag(5);
	//cout << c1.getReal() << " + i" << c1.getImag() << endl;
	//c1.display();

	Complex c2(3, 7);
	//cout << c2.getReal() << " + i" << c2.getImag() << endl;
	//c2.display();
	cout << c2.get_str() << endl;

	cout << sizeof(c1) << " " << sizeof(c2) << endl;


}

void Test3()
{
	string s1("Test"), s2("Ramakant"), s3("Bosch is a company that is globally known, and it has offices in many coutries and cities. We are currently located in the office in Bangalore.");

	cout << s1.length() << " " << s2.length() << " " << s3.length() << endl;

	cout << sizeof(s1) << " " << sizeof(s2) << " " << sizeof(s3) << endl;
}

char* Test4()
{
	string s1("Test");
	char arr1[10];
	strcpy(arr1, s1.c_str());

	return arr1;
}


int main()
{
	char* strData = Test4();
	cout << strData << endl;
	return 0;
}