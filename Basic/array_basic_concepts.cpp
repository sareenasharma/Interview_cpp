/* Problem requirement
* 1. Create the array of size 10 integers
* 2. fill he array with random variables
* 3. find min, max, and average
*/


#include<iostream>
#include<cstdlib>


int main()
{
	const int size = 10;
	int a1[size];

	for (int i = 0; i < size; i++)
	{
		a1[i] = rand() % 100;
	}

	for (int i = 0; i < size; i++)
	{
		std::cout<<a1[i]<<std::endl;
	}

	int min = a1[0], max = a1[0], sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (min > a1[i])
		{
			min = a1[i];
		}
		if (max < a1[i])
		{
			max = a1[i];
		}
		sum += a1[i];
	}
	int average = static_cast<double>(sum / size);
	printf("Average:%d", average);
	printf("\nMaximum:%d", max);
	printf("\nMinium:%d", min);







	return 0;
}