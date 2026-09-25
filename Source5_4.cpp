#include <iostream>

int main()
{
	int arr[] = { 10, 11, 12, 100, 1, 2, 3, 4, 5, 6 };
	int member{ 0 };

	std::cout << "Array: ";

	for (int i = 0; i < 9; i++)
	{
		std::cout << arr[i] << " ";
	}

	for (int i = 9; i > 0; i--)
	{
		if (arr[i] > arr[i - 1])
		{
			member = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = member;
		}
	}

	std::cout << std::endl << "Sort array: ";

	for (int i = 0; i < 9; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}