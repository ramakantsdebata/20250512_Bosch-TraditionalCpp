#include <string>
#include <sstream>
#include "Complex.h"
using namespace std;

Complex::Complex()	//Default ctor
{
	mReal = 0;
	mImag = 0;
}

Complex::Complex(int real, int imag) //Parameterised ctor
{
	mReal = real;
	mImag = imag;
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
