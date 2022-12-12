/*
 * function_object.cpp
 *
 *  Created on: Dec 11, 2022
 *      Author: skhan
 */

#include <iostream>
#include <vector>

#include "reverse_header.hpp"
using namespace std;

// Abstract base class
template <class T> class StringReverseBase {
public:
	StringReverseBase() {};
	virtual ~StringReverseBase() = default;
	virtual T operator() (T t, unsigned int size) = 0;
};

// When Input is String
template <class T>
class StringReverseChildClass : public StringReverseBase<T>{
public:
	StringReverseChildClass<T>() {};
	virtual ~StringReverseChildClass<T>() = default;
	virtual T operator() (T str, unsigned int size)
	{
		//Called the template to reverse the string
		return reverseString(str, size);
	}

};

// When Input is Vector
template <class T>
class VecReverseChildClass : public StringReverseBase<T>{
public:
	VecReverseChildClass<T>() {};
	virtual ~VecReverseChildClass<T>() = default;
	virtual T operator() (T vec, unsigned int size)
	{
		//Called the template to reverse the vector
		return reverseString(vec, size);
	}
};


