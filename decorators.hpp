/*
 * decorators.hpp
 *
 *  Created on: Dec 11, 2022
 *      Author: skhan
 */

#ifndef DECORATORS_HPP_
#define DECORATORS_HPP_

#include<iostream>
#include<string.h>
#include "reverse_header.hpp"
using namespace std;

class BaseClass {
	public:
		virtual ~BaseClass() {}
		virtual string Operation() = 0;
};

// Used to set private variable.
class StringInputConcrete : public BaseClass {
	private:
		string str;
	public:
		StringInputConcrete(string str)
		{
			this->str = str;
		}
		string Operation() override
		{
			return this->str;
		}
};

// Get the string from StringInputConcrete class.
class Decorator : public BaseClass {
	protected:
		BaseClass* base_class_Ptr;

	public:
		Decorator(BaseClass* component) : base_class_Ptr(component) {
	}

	string Operation() override
	{
		return this->base_class_Ptr->Operation();
	}
};

// Do the reverse and return the result to the caller.
class StringReverseDecorator : public Decorator {
	private:
		string rev_string;
	public:
		StringReverseDecorator(BaseClass* obj) : Decorator(obj) {
	}
	string Operation() override
	{
		this->rev_string = Decorator::Operation();
		this->rev_string = reverseString(this->rev_string, this->rev_string.length());
		return this->rev_string;
	}
};

#endif /* DECORATORS_HPP_ */
