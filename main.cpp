// Implementation of binary heap
#include "Sort.hpp"
#include <iostream>

const int SORT_ARRAY_SIZE = 40;

int main(const int argc, char const** argv)
{
	int* arr = new int[SORT_ARRAY_SIZE];
	for (u32 i = 0; i < SORT_ARRAY_SIZE; i++) //RANDOMIZE INPUT
	{
		arr[i] = rand() % SORT_ARRAY_SIZE + 1; 
		std::cout << arr[i] << "-";
	}
	std::cout << std::endl << std::endl;

	Sorting::quick(arr, SORT_ARRAY_SIZE);
	
	for (u32 i = 0; i < SORT_ARRAY_SIZE; i++) //LOOP ARRAY
	{
		std::cout << arr[i] << "<";
	}
	delete arr;
	std::getchar();
}