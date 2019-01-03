#include <iostream>
//int i = 100;
int main()
{
	// int cnt = 0,currVal = 0,val = 0;
	// int i = 10;
	// int j = ::i;
	// std::cout << j << std::endl;

	
	if(std::cin >> val){
		currVal = val;
		++cnt;
		std::cout << "LAla" << std::endl;
		while(std::cin >> val)
		{
			if(currVal == val)
				++cnt;
			else
			{
				std::cout << currVal << " num is " << cnt << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " num is " << cnt << std::endl;
	}
	return 0;
}