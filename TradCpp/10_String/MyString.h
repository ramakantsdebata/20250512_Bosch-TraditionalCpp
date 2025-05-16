#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>

class MyString
{
	mutable char* m_ptr;
	mutable int m_len;
	MyString(char* ptr, int len);
	char* AllocateStr(int, const char*) const;

public:
	MyString();
	MyString(const char* str);
	MyString(const MyString&);
	const char* get_str() const;
	int length();
	MyString operator+(const MyString& obj);
	const MyString& operator=(const MyString& obj) const;

	~MyString();

	friend std::ostream& operator<<(std::ostream& out, const MyString& obj);
};

std::ostream& operator<<(std::ostream& out, const MyString& obj);

#endif //MYSTRING_H