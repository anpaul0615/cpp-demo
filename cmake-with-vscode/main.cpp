#include <iostream>
#include <cassert>

#include "Foo.h"

using namespace std;
using namespace test;

int main()
{
	Foo foo;
	assert(foo.Hello() == "Hello :)");
	cout << foo.Hello() << endl;

	return 0;
}
