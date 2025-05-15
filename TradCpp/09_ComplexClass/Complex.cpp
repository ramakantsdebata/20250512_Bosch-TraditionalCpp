#include <iostream>
#include <string>
#include <sstream>
#include "Complex.h"
using namespace std;

Complex::Complex()	//Default ctor
{
	cout << "def ctor" << endl;
	mReal = 0;
	mImag = 0;
}

Complex::Complex(int real, int imag) //Parameterised ctor
{
	cout << "para ctor" << endl;
	mReal = real;
	mImag = imag;
}

Complex::Complex(const Complex& obj)
{
	cout << "copy ctor" << endl;
	mReal = obj.mReal;
	mImag = obj.mImag + 1;	
}

void Complex::setReal(int val)
{
	mReal = val;
}

int Complex::getReal()
{
	return mReal;
}

void Complex::setImag(int val)
{
	mImag = val;
}

int Complex::getImag()
{
	return mImag;
}

string Complex::get_str()
{
	stringstream sstr;
	sstr << mReal << " + i" << getImag() << endl;
	string repr = sstr.str();

	return repr;
}

Complex Complex::operator+(const Complex& obj)
{
	Complex retData;
	retData.mReal = this->mReal + obj.mReal;
	retData.mImag = this->mImag + obj.mImag;
	Complex res(mReal + obj.mReal, mImag + obj.mImag + 1);
	//Complex retData = res;

	//res.mImag = res.mImag + 1;
	return retData;
}

Complex Complex::operator++()
{
	mReal++;
	return *this;
}

int i = 10;
int& ref = i;

Complex::~Complex()
{
	cout << "dtor called for (" << mReal << " + i" << mImag << ")" << endl;
}