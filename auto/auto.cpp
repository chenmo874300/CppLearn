#include <iostream>
#include <typeinfo>

int main()
{
	int i = 0,&r = i;
	auto a = r;
	const int ci = i,&cr = i;
	auto b = ci;
	auto c = cr;
	const int m = 42;
	const auto j2 = m;
	std::cout << typeid(j2).name() << std::endl;
}