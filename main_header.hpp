/*
 * mainHeader.hpp
 *
 *  Created on: Dec 11, 2022
 *      Author: skhan
 */

#ifndef MAIN_HEADER_HPP_
#define MAIN_HEADER_HPP_


#include <iterator>
#include <bits/stdc++.h>
#include <cctype>
#include "function_object.cpp"
#include "overloaded_operator.cpp"
#include "decorators.hpp"
#include "reverse_class.cpp"

typedef char charType;
typedef string stringType;
typedef string& stringReferenceType;
typedef vector<char> vectorType;

const char* ws_1 = " \t\n\r\f\v";

// trim from end of string (right)
inline std::string& rtrim(std::string& s, const char* t = ws_1)
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

// trim from beginning of string (left)
inline std::string& ltrim(std::string& s, const char* t = ws_1)
{
    s.erase(0, s.find_first_not_of(t));
    return s;
}

// trim from both ends of string (right then left)
inline std::string& trim(std::string& s, const char* t = ws_1)
{
    return ltrim(rtrim(s, t), t);
}

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
