#include "alias.hpp"

#ifndef SORT_H
#define SORT_H

namespace Sorting
{
	typedef int ItemType;

	bool lessThan(const ItemType lhs, const ItemType rhs);
	void swap(ItemType & a, ItemType & b);

	void selection(ItemType* arr, const u32 arrLen);
	void insertion(ItemType* arr, const u32 arrLen);
	void bubble(ItemType* arr, const u32 arrLen);
	void quick(ItemType* arr, const u32 arrLen);
	
	namespace Quick
	{
		void quick(ItemType* arr, const u32 lo, const u32 hi);
		u32 partition(ItemType* arr, const u32 lo, const u32 hi);
	}
	
}

#endif //!SORT_H