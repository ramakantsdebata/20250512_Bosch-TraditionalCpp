#include "group1.h"
#include "group2.h"

void UsingGrp1()
{
	using namespace grp1;
	Foo();
	Bar();
}

void UsingGrp2()
{
	using namespace grp2;
	Foo();
	Bar();
}

int main()
{
	UsingGrp1();
	UsingGrp2();

	return 0;
}