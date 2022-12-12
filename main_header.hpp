/*
 * mainHeader.hpp
 *
 *  Created on: Dec 11, 2022
 *      Author: skhan
 */

#ifndef MAIN_HEADER_HPP_
#define MAIN_HEADER_HPP_


#include <iterator>
#include "function_object.cpp"
#include "overloaded_operator.cpp"
#include "decorators.hpp"
#include "reverse_class.cpp"

typedef char charType;
typedef string stringType;
typedef string& stringReferenceType;
typedef vector<char> vectorType;

// This function is used to call virtual function operation() in decorators.hpp
stringType callDecorator(BaseClass* component) {
	return component->Operation();
}

// This function template is used to call StringReverseChildClass and VecReverseChildClass operator function ().
template <typename T>
T reverseFunc(T v, unsigned int size, StringReverseBase<T>* bin_func) {
	return (*bin_func)(v, size);
}


#endif /* MAIN_HEADER_HPP_ */
