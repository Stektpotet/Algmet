#include "alias.hpp"

#ifndef SORT_H
#define SORT_H

namespace Sorting
{
	typedef int ItemType;

	bool comparer(const ItemType lhs, const ItemType rhs);

	void swap(ItemType & a, ItemType & b);

	class Selection
	{
	public:
		static void sort(ItemType* arr, const u32 arrLen);
	//private:
	//	void step()
	};
}

#endif //!SORT_H