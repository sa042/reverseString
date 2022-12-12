/*
 * class_reverse.cpp
 *
 *  Created on: Dec 10, 2022
 *      Author: skhan
 */
#include <iostream>
#include <vector>
#include "reverse_header.hpp"
using namespace std;

// Both string and vector input can be used
template <class T, class V, class U> class StringReverseCls {
	private:
		T *str;
		V vec;
		unsigned int size;

	public:
		StringReverseCls(U str, V vec, unsigned int size);
		void reverse();
		T* getString();
		V getVector();
};

//Set class variable : string and vector.
template <class T, class V, class U> StringReverseCls<T, V, U>::StringReverseCls(U str, V vec, unsigned int size)
{
	this->size = size;
	this->str = new T [size];
	this->vec = vec;
	for (unsigned int i = 0; i < this->size; i++){
		this->str[i] = str[i];

	}
}

// Reverse function
template <class T, class V, class U> void StringReverseCls<T, V, U>::reverse()
{
	// reverseString() is defined in templete_reverse.cpp
	str = reverseString(str, size);
	vec = reverseString(vec, size);
}

// Get vector
template <class T, class V, class U> V StringReverseCls<T, V, U>::getVector()
{
	return (this->vec);
}
//Get string
template <class T, class V, class U> T* StringReverseCls<T, V, U>::getString()
{
	return (this->str);
}
