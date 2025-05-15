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
	mImag = obj.mImag;	
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
	cout << "operator+() called" << endl;
	Complex retData;
	retData.mReal = this->mReal + obj.mReal;
	retData.mImag = this->mImag + obj.mImag;
	Complex res(mReal + obj.mReal, mImag + obj.mImag + 1);
	//Complex retData = res;

	//res.mImag = res.mImag + 1;
	return retData;
}

Complex& Complex::operator++() // Pre-increment operator
{
	mReal++;
	return *this;
}

Complex Complex::operator++(int) // Post-increment operator
{
	Complex temp(*this);
	mReal++;
	return temp;
}

const Complex& Complex::operator=(const Complex& obj)
{
	cout << "operator=() called" << endl;
	mReal = obj.mReal;
	mImag = obj.mImag;

	return *this;
}

Complex operator+(int val, const Complex& obj)
{
	Complex res(obj);
	//res.setReal(res.getReal() + val);
	res.mReal += val;
	return res;
}

std::ostream& operator<<(std::ostream& out, const Complex& obj)
{
	out << "Complex [" << obj.mReal << " + i" << obj.mImag << "]";
	return out;
}

Complex::~Complex()
{
	cout << "dtor called for (" << mReal << " + i" << mImag << ")" << endl;
}