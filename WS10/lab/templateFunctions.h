//Name: Saetbyeol Lim	
//ID:149814212
//Email:slim62@myseneca.ca
// Date: 2022/8/4
//Section: OOP244_NAA

#ifndef SDDS_TEMPLATEFUNCTIONS_H_
#define SDDS_TEMPLATEFUNCTIONS_H_
#include <iostream>
#include "Collection.h"
namespace sdds {
	//Find with 3 parameters
	template <typename T1, typename T2>
	bool find(T1* arr, int index, T2 key) {
		bool result = false;
		if (arr[index] == key) {
			result = true;
		}
		return result;
	}
	
	//Find with 4 parameters
	template<typename T1, typename T2, typename T3>
	int find(T1* arr, int size, T2 key1, T3 key2) {
		int result = -1;
		for (int i = 0; i < size && result < 0; i++) {
			if (arr[i] == key1 && arr[i] == key2) {
				result = i;
			}
		}
		return result;
	}

	//Insertion operator
	template<typename T>
	std::ostream& operator<<(std::ostream& os, Collection<T> collection) {
		for (int i = 0; i < collection.size(); i++) {
			os << collection[i] << std::endl;
		}
		return os;
	}

	//Load Collection
	template<typename T> 
	const Collection<T>& loadCollection(Collection<T>& collection, T object) {
		collection += object;
		return collection;
	}

}
#endif // !SDDS_SEARCH_H_

