#include "Sort.hpp"

void Sorting::Selection::sort(ItemType * arr, const u32 arrLen)
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

bool Sorting::comparer(const ItemType lhs, const ItemType rhs)
{
	return lhs < rhs;
}

void Sorting::swap(ItemType & a, ItemType & b)
{
	ItemType temp = a;
	a = b;
	b = temp;
}
