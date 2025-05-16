#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "MyString.h"
using namespace std;

MyString::MyString()
{
	m_ptr = NULL;
	m_len = 0;
}

MyString::MyString(const char* str)
{
	m_len = strlen(str);
	m_ptr = AllocateStr(m_len, str);
}

MyString::MyString(char* ptr, int len)
{
	m_ptr = ptr;
	m_len = len;
}

MyString::MyString(const MyString& obj)
{
	m_len = obj.m_len;
	m_ptr = AllocateStr(m_len, obj.m_ptr);
}

char* MyString::AllocateStr(int len, const char* data)
{
	char* ptr = new char[len + 1];
	strcpy(ptr, data);
	return ptr;
}

const char* MyString::get_str()
{
	return m_ptr;
}

int MyString::length()
{
	return m_len;
}

MyString MyString::operator+(const MyString& obj)
{
	// Option 1: Create of Mystring and modify it's state to the concatenated string
	// Option 2: Conctenate the 2 strings using a buffer and then create the new object

	//Option 2
	int len = m_len + obj.m_len;
	char* temp = new char[len + 1];
	strcpy(temp, m_ptr);
	strcat(temp, obj.m_ptr);
	
	//MyString res(temp);
	//delete[] temp;

	MyString res2(temp, len);
	temp = NULL;

	return res2;
}

MyString::~MyString()
{
	delete[] m_ptr;
	m_ptr = NULL;
	//delete[] m_ptr;
}

std::ostream& operator<<(std::ostream& out, const MyString& obj)
{
	out << obj.m_ptr << "(MyString)";
	return out;
}