/*Template for reverse the String*/


// Passing string by value
template <typename T, typename T1>
T reverseString(T str, T1 size)
{
	for (unsigned int i = 0, j = size - 1; i < size / 2; i++, j--)
	{
		char ch = str[i];
		str[i] = str[j];
		str[j] = ch;

	}
	return str;
}

// Passing string by reference
template <typename T, typename T1>
void reverseStringRef(T& str, T1 size)
{
	for (unsigned int i = 0, j = size - 1; i < size / 2; i++, j--)
	{
		char ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
}
