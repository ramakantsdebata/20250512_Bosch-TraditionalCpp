#include <iostream>
using namespace std;

int main()
{
	//int x = 10;
	int* p1;
	p1 = new int[10];
	int p1_ctr = 1;

	// Allocate for p1
	// Some work

	{
		//int y = x;
		//cout << "x: " << x << endl;
		//cout << "y: " << y << endl;

		int* p2 = p1;
		p1_ctr++;
		cout << "P1 --> " << *p1 << endl;
		cout << "P2 --> " << *p2 << endl;

		*p2 = 40;
		cout << "P1 --> " << *p1 << endl;
		cout << "P2 --> " << *p2 << endl;

		// Handle the pointer
		if (p1_ctr > 1)
		{
			p2 = NULL;
			p1_ctr--;
		}
		else
		{
			delete[] p2;
		}

	}
	cout << "\nLater..." << endl;

	//cout << "x: " << x << endl;
	//cout << "y: " << y << endl;

	cout << "P1 --> " << *p1 << endl;
	//cout << "P2 --> " << *p2 << endl;

	if (p1_ctr > 1)
	{
		p1 = NULL;
		p1_ctr--;
	}
	else
	{
		delete[] p1;
	}

	return 0;
}