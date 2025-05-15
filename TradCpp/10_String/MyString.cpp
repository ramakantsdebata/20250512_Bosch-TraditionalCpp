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
	m_ptr = new char[m_len + 1];
	strcpy(m_ptr, str);
}

const char* MyString::get_str()
{
	return m_ptr;
}

int MyString::length()
{
	return m_len;
}

