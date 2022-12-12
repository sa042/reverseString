/*
 * overloaded_operator.cpp
 *
 *  Created on: Dec 11, 2022
 *      Author: skhan
 */

#include<iostream>
#include<string>
using namespace std;
#include "reverse_header.hpp"

// ! operator overloaded.
class OverloadedOperators
{
	private:
		string str;
		unsigned int size;
	public:
		OverloadedOperators(string str)
		{
			this->str = str;
			this->size = this->str.length();
		}
		string operator!()
		{
			return reverseString(str, size);
		}
};











