#include <iostream>

int main()
{
	int arr[10] = { 10, 11, 12, 100, 1, 2, 3, 4, 5, 6 };
	int min = arr[0];
	int max = arr[0];

	std::cout << "Array: ";
	
	for (int i = 0; i < 9; i++)
	{
		std::cout << arr[i] << " ";
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}

	std::cout << "Minimum: " << min << std::endl;
	std::cout << "Maximum: " << max << std::endl;

	return 0;
}