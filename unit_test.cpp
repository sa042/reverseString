//unit_test.cpp
#include "main_header.hpp"

int main()
{
	stringType str_input;
	stringType reverse_string_out;
	stringType reverse_string_ref_out;
	vectorType reverse_vec_out;

	char select;
	unsigned int str_length;
	unsigned int vec_size;
	bool flag = true;

	while(flag){


		cout << "Enter string: " <<endl;
		cin.ignore();
		//Taking input
		getline(cin, str_input);

		vectorType vec(str_input.begin(), str_input.end());
		str_length = str_input.length();
		vec_size = vec.size();

		cout <<"Press 1 to 7 to choose Expression from 1 to 7 and Press 8 to exit" << endl;
		cout << "Enter your choice: " << endl;
		cin >> select;

		switch(select) {
			case '1' :
			{
				/*Expression 1 Start -> Using Templates
				 *
				 *
				 * */
				cout <<"Expression 1: Using Templates ->" << endl;
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
				break;
			}
			case '2':
			{
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
				break;
			}
			case '3':
			{
				/*Expression 3 Start -> Using Function Objects
				 *
				 *
				 */
				cout << endl;
				cout <<"Expression 3: Using Function Objects ->" << endl;

				StringReverseBase<stringType>* ptr_string_rev_child_class = new StringReverseChildClass<stringType>();
				reverse_string_out = reverseFunc(str_input, str_length, ptr_string_rev_child_class);
				cout <<"Reverse when string type is used = " << reverse_string_out << endl;

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
				break;
			}
			case '4':
			{
				/*Expression 4 Start -> Using overloaded operators
				 *
				 *
				 **/

				cout << endl;
				cout <<"Expression 4: Using Overloaded Operators ->" << endl;
				OverloadedOperators overloaded_op_obj(str_input);
				reverse_string_out  = !overloaded_op_obj;
				cout <<"Reverse when string type is used = " << reverse_string_out << endl;
				cout <<"Expression 4 End." << endl;

				/*Expression 4 End
				 *
				 *
				 * */
				break;
			}
			case '5':
			{
				/*Expression 5 Start -> Using closures
				*
				*
				**/
				cout << endl;
				cout <<"Expression 5: Using closures ->" << endl;

				stringType closure_input = str_input;

				const auto& func = [&closure_input](){
				unsigned int size = closure_input.size();
				reverseStringRef(closure_input, size);
				};

				func();
				cout <<"Reverse when closures is used = " << closure_input << endl;
				func();
				cout <<"Reverse it back to original string  = " << closure_input << endl;
				cout <<"Expression 5 End." << endl;

				/*Expression 5 End
				*
				*
				* */
				break;
			}
			case '6':
			{
				/*Expression 6 Start -> Using Decorators
				*
				*
				**/
				cout << endl;
				cout <<"Expression 6: Using Decorators ->" << endl;

				BaseClass* base_obj = new StringInputConcrete(str_input);
				cout <<"Input String : "<< callDecorator(base_obj) << endl;

				BaseClass* decorator_obj = new StringReverseDecorator(base_obj);
				reverse_string_out = callDecorator(decorator_obj);

				cout << "Reverse String: " << reverse_string_out << endl;

				delete base_obj;
				delete decorator_obj;

				cout <<"Expression 6 End." << endl;

				/*Expression 6 End
				*
				*
				* */
				break;
			}
			case '7':
			{
				stringType str_out = str_input;
				reverse(str_out.begin(), str_out.end());
				cout << "Reverse String: " << str_out << endl;
				break;
			}

			case '8':
			{
				cout << "Thanks for using my program. Goodbye!!" << endl;
				flag = false;
				break;
			}
			default:
			{
				cout << "Please choose between 1 to 7" << endl;
				break;
			}
		}
	}
	return 0;
}

//locate.h


