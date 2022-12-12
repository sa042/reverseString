//unit_test.cpp
#include <iostream>
using namespace std;

#include <iterator>
#include <string>
#include <vector>
#include "reverse_header.hpp"

typedef char charType;
typedef string stringType;
typedef string& stringReferenceType;
typedef vector<char> vectorType;


int main()
{
	/*Expression 1 Start -> Using Templates
	 *
	 *
	 * */
	stringType str_input;
	cout << "Enter string: ";
	//Taking input
	getline(cin, str_input);

	stringType reverse_string_out;
	stringType reverse_string_ref_out;
	vectorType reverse_vec_out;

	cout <<"Expression 1: Using Templates ->" << endl;
	vectorType vec(str_input.begin(), str_input.end());

	unsigned int str_length = str_input.length();
	unsigned int vec_size = vec.size();

	reverse_string_out = reverseString(str_input, str_length);
	cout <<"Reverse when string value type is used = " << reverse_string_out << endl;

	stringReferenceType str_ref_input = str_input;
	reverse_string_ref_out = reverseString(str_ref_input, str_length);
	cout <<"Reverse when string reference type is used = " << reverse_string_ref_out << endl;

	reverse_vec_out = reverseString(vec, vec_size);
	cout <<"Reverse when vector is used = ";
	copy(reverse_vec_out.begin(), reverse_vec_out.end(), ostream_iterator<char>(cout));
	cout << endl <<"Expression 1 End." << endl;

	/*Expression 1 End
	 *
	 *
	 * */

	return 0;
}

//locate.h


