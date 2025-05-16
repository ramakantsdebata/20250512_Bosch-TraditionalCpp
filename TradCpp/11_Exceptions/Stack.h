#ifndef STACK_H
#define STACK_H

class cStack
{
	int* m_ptr;
	int m_capacity;
	int m_top;

	bool IsEmpty();
	bool IsFull();

public:
	cStack();
	cStack(int size);
	bool Push(int val);
	int Pop();
	~cStack();
};

#endif	// STACK_H
