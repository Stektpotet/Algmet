#include "sort.hpp"

void Sorting::selection(ItemType * arr, const u32 arrLen)
{
	if (arrLen <= 1) return;
	//move over the array, every item at index < i is sorted
	for (u32 i = 0; i < arrLen-1; i++)
	{
		u32 min = i;
		for (u32 j = i+1; j < arrLen; j++)//look for a minimum value in all coming items
		{
			if(lessThan(arr[j], arr[min])) { min = j; }//compare with current min, change min index if a new min is found
		}
		if (min != i) { swap(arr[i], arr[min]); } //if element at i was not min, do a swap on the item that was min
	}
}

void Sorting::insertion(ItemType * arr, const u32 arrLen)
{
	if (arrLen <= 1) return;
	for (u32 i = 1; i < arrLen; i++)
	{
		u32 j = i;
		while ( j > 0 && lessThan(arr[j], arr[j - 1]))
		{ swap(arr[j - 1], arr[j]); j--; }
	}
}

void Sorting::bubble(ItemType * arr, const u32 arrLen)
{
	if (arrLen <= 1) return;
	for (u32 i = 0; i < arrLen-1; i++)
	{
		for (u32 j = 1; j < arrLen-i; j++)
		{
			if (lessThan(arr[j], arr[j - 1]))
			{ swap(arr[j - 1], arr[j]); }
		}
	}
}

void Sorting::quick(ItemType * arr, const u32 arrLen)
{
	Quick::quick(arr, 0, arrLen - 1);
}

void Sorting::Quick::quick(ItemType * arr, const u32 lo, const u32 hi)
{
	if (hi <= lo) return;
	u32 pivot = Quick::partition(arr, lo, hi);
	quick(arr, lo, pivot - 1);
	quick(arr, pivot + 1, hi);
}

u32 Sorting::Quick::partition(ItemType * arr, const u32 lo, const u32 hi)
{
	u32 i = lo, j = hi+1;
	while (true)
	{
		while (lessThan(arr[++i], arr[lo])) { if (i == hi) break; }
		while (lessThan(arr[lo], arr[--j])) { if (j == lo) break; }
		
		if (i >= j) break;
		swap(arr[i], arr[j]);
	}
	swap(arr[j], arr[lo]);
	return j;
}



bool Sorting::lessThan(const ItemType lhs, const ItemType rhs)
{ return lhs < rhs; }

void Sorting::swap(ItemType & a, ItemType & b)
{
	ItemType temp = a;
	a = b;
	b = temp;
}
