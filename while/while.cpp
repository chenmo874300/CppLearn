#include <iostream>

int printSum(int m,int n)
{
	do{
		std::cout<< m << " " << std::endl;
		++m;
	}while(m != (n+1));
	return 0;
}

int main()
{
	int a,b,sum = 0, val = 0;
	std::cout << "input two integer" << std::endl;
	std::cin >> a >> b;
	if(a <= b)
	{
		printSum(a,b);
	}
	else
		printSum(b,a);
	// while(val <= 10)
	// {
	// 	sum += val;
	// 	++val;
	// }
	// std::cout << "The sum of 0 to 10 is " << sum << std::endl;
	return 0;
}

