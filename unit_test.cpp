//unit_test.cpp
#include "main_header.hpp"

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

	/*Expression 2 Start -> Using Class and Member Functions
	 *
	 *
	 */

	cout << endl;
	cout <<"Expression 2: Using Class and Member Functions ->" << endl;

	StringReverseCls<charType, vectorType, stringType> reverse_obj(str_input, vec, str_length);
	reverse_obj.reverse();

	reverse_vec_out = reverse_obj.getVector();
	cout <<"Reverse when vector is used = ";
	copy(reverse_vec_out.begin(), reverse_vec_out.end(), ostream_iterator<char>(cout));
	cout << endl;

	cout <<"Reverse when String is used = ";
	charType* ptr_reverse_string_out = reverse_obj.getString();
	for (unsigned int i = 0; i < str_length; i++)
	   cout << *(ptr_reverse_string_out + i);

	cout << endl;

	cout <<"Expression 2 End." << endl;

	/*Expression 2 End
	 *
	 *
	 * */

	/*Expression 3 Start -> Using Function Objects
	 *
	 *
	 */
	cout << endl;
	cout <<"Expression 3: Using Function Objects ->" << endl;

	StringReverseBase<stringType>* ptr_string_rev_child_class = new StringReverseChildClass<stringType>();
	stringType strOut = reverseFunc(str_input , str_length, ptr_string_rev_child_class);
	cout <<"Reverse when string type is used = " << strOut << endl;

	StringReverseBase<vectorType>* ptr_vec_rev_child_class = new VecReverseChildClass<vectorType>();
	reverse_vec_out = reverseFunc(vec, vec_size, ptr_vec_rev_child_class);
	cout <<"Reverse when vector is used = ";
	copy(reverse_vec_out.begin(), reverse_vec_out.end(), ostream_iterator<char>(cout));
	cout << endl;
	cout <<"Expression 3 End." << endl;
	/*Expression 3 End
	 *
	 *
	 * */

	return 0;
}

//locate.h


