#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class MyString
{
	char* m_ptr;
	int m_len;
	MyString(char* ptr, int len);
	char* AllocateStr(int, const char*);

public:
	MyString();
	MyString(const char* str);
	MyString(const MyString&);
	const char* get_str();
	int length();
	MyString operator+(const MyString& obj);
	~MyString();

	friend std::ostream& operator<<(std::ostream& out, const MyString& obj);
};

std::ostream& operator<<(std::ostream& out, const MyString& obj);

#endif //MYSTRING_H