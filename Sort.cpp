#include "sort.hpp"

void Sorting::selection(ItemType * arr, const u32 arrLen)
{
	//move over the array, every item at index < i is sorted
	for (size_t i = 0; i < arrLen-1; i++)
	{
		u32 min = i;
		for (size_t j = i+1; j < arrLen; j++)//look for a minimum value in all coming items
		{
			if(comparer(arr[j], arr[min])) { min = j; }//compare with current min, change min index if a new min is found
		}
		if (min != i) { swap(arr[i], arr[min]); } //if element at i was not min, do a swap on the item that was min
	}
}

void Sorting::insertion(ItemType * arr, const u32 arrLen)
{
	for (size_t i = 1; i < arrLen; i++)
	{
		u32 j = i;
		while ( j > 0 && comparer(arr[j], arr[j - 1]))
		{ swap(arr[j - 1], arr[j]); j--; }
	}
}

void Sorting::bubble(ItemType * arr, const u32 arrLen)
{
	for (size_t i = 0; i < arrLen-1; i++)
	{
		for (size_t j = 1; j < arrLen-i; j++)
		{
			if (comparer(arr[j], arr[j - 1]))
			{ swap(arr[j - 1], arr[j]); }
		}

	}
}

bool Sorting::comparer(const ItemType lhs, const ItemType rhs)
{ return lhs < rhs; }

void Sorting::swap(ItemType & a, ItemType & b)
{
	ItemType temp = a;
	a = b;
	b = temp;
}
