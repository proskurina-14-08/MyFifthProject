#include <iostream>

int main()
{
	int arr[3][6] = {
		{ 1, 2, 3, 4, 5, 6 },
		{ 7, 8, 9, 10, 11, 12 },
		{ 13, 14, 15, 16, 17, 18 },
	};
	int min = arr[0][0];
	int max = arr[0][0];
	int iMin = 0;
	int jMin = 0;
	int iMax = 0;
	int jMax = 0;

	std::cout << "Array: \n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			std::cout << arr[i][j] << "\t";
			if (arr[i][j] < min)
			{
				min = arr[i][j];
				iMin = i;
				jMin = j;
			}
			if (arr[i][j] > max)
			{
				min = arr[i][j];
				iMax = i;
				jMax = j;
			}
		}
		std::cout << std::endl;
	}

	std::cout << "Minimum: " << iMin << " " << jMin << std::endl;
	std::cout << "Maximum: " << iMax << " " << jMax << std::endl;

	return 0;
}