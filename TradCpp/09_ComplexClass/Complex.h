#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>

class Complex
{
	int mReal;
	int mImag;

public:
	Complex();
	Complex(int real, int imag = 0); // Parameteried ctor with default args
	//Complex(int real);
	Complex(const Complex& obj);	//copy ctor
	void setReal(int val);
	int getReal();
	void setImag(int val);
	int getImag();
	std::string get_str();

	// Operator Overloading
	Complex operator+(const Complex& obj);
	Complex& operator++();
	Complex operator++(int);
	const Complex& operator=(const Complex& obj);

	friend Complex operator+(int val, const Complex& obj);
	
	~Complex();
};

Complex operator+(int val, const Complex& obj);


#endif	//COMPLEX_H