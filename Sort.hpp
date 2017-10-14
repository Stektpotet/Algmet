#include "alias.hpp"

#ifndef SORT_H
#define SORT_H

namespace Sorting
{
	typedef int ItemType;

	bool comparer(const ItemType lhs, const ItemType rhs);

	void swap(ItemType & a, ItemType & b);

	void selection(ItemType* arr, const u32 arrLen);
	void insertion(ItemType* arr, const u32 arrLen);
	void bubble(ItemType* arr, const u32 arrLen);
}

#endif //!SORT_H