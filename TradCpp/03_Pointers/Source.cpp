#include <iostream>
using namespace std;


void Foo()
{
	int arr1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	cout << arr1[1] << endl;
	cout << *(arr1 + 1) << endl;
	cout << *arr1 + 1 << endl;
}

void Bar()
{
	int arr[5][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15} };
	cout << arr[2][1] << endl;
}

int main()
{
	Bar();
	return 0;
}