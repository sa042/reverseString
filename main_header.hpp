/*
 * mainHeader.hpp
 *
 *  Created on: Dec 11, 2022
 *      Author: skhan
 */

#ifndef MAIN_HEADER_HPP_
#define MAIN_HEADER_HPP_


#include <iterator>
#include "reverse_class.cpp"
#include "function_object.cpp"
#include "overloaded_operator.cpp"

typedef char charType;
typedef string stringType;
typedef string& stringReferenceType;
typedef vector<char> vectorType;

// This function template is used to call StringReverseChildClass and VecReverseChildClass operator function ().
template <typename T>
T reverseFunc(T vec, unsigned int size, StringReverseBase<T>* bin_func) {
	return (*bin_func)(vec, size);
}

#endif /* MAIN_HEADER_HPP_ */
