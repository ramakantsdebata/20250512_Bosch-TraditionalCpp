#include <iostream>
using namespace std;

static int data = 10;   // Internal linkage

int getSerial()
{
	static int serial = 1;    // Storage specified to be the Data-Area

	return serial++;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		cout << getSerial() << endl;
	}
	return 0;
}