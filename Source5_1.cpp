#include <iostream>

int main()
{
	int arr[10] = { 10, 11, 12, 100, 1, 2, 3, 4, 5, 6 };
	
	for (int i = 0; i < 9; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << arr[9];
	return 0;
}