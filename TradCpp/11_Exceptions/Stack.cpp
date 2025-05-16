#include <iostream>
#include "Stack.h"

bool cStack::IsEmpty()
{
	if (m_top <= 0)
		return false;
	else 
		return true;
}

bool cStack::IsFull()
{
	if (m_top < m_capacity-1)
		return false;
	else
		return true;
}

cStack::cStack()
{
	m_capacity = 5;
	m_ptr = new int[m_capacity];
	m_top = 0;
}

cStack::cStack(int size)
{
	m_capacity = size;
	m_ptr = new int[m_capacity];
	m_top = 0;
}

bool cStack::Push(int val)
{
	if (!IsFull())
	{
		m_ptr[m_top++] = val;
		return true;
	}
	else
		return false;
}

int cStack::Pop()
{
	if (!IsEmpty())
		return m_ptr[--m_top];

	return -1;
}

cStack::~cStack()
{
	delete[] m_ptr;
	m_ptr = NULL;
}

