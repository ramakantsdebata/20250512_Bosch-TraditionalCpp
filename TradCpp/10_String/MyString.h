#ifndef MYSTRING_H
#define MYSTRING_H

class MyString
{
	char* m_ptr;
	int m_len;

public:
	MyString();
	MyString(const char* str);
	const char* get_str();
	int length();
};

#endif //MYSTRING_H