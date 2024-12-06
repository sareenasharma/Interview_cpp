// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//In this program we are implementing the bubble sort algorithm 
/*

What bubble sort is:
In short: arrange the elements in the increasing order 
In each iteration one number is placed at the correct position

Bubble sort takes minimum time (Order of n) when elements are already sorted. 
Hence it is best to check if the array is already sorted or not beforehand, to avoid O(N2) time complexity.

Bubble sort performs the swapping of adjacent pairs without the use of any more space. 
Hence Bubble sort algorithm is an in-place algorithm.

the bubble sort algorithm is stable.

*/

#include <iostream>

int main()
{
    std::cout << "Bubble sort implemetation\n";
    int a[] = { 7,14,11,8,9 };
    int size = sizeof(a) / sizeof(a[0]);
    std::cout << "valueof size is : " << size << std::endl;
    int count = 0;
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }  

        for (int k = 0; k < size; k++)
        {
            std::cout << a[k] << ", ";
        }
    }
   
    std::cout << "Sorted Array is : ";
    for (int k = 0; k < size; k++)
    {
        std::cout << a[k] << ", ";
    }
    return 0;
}

