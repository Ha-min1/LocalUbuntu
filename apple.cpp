#include <iostream>

template <typename T>
T add (T a, T b)
{
	return a+b;
}

int main()
{
	std::cout << add<int>(3.4, 2.4) << std::endl;
	return 0;
}
