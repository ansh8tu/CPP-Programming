=================================================================================================================================================
//This program demonstrates the use of c style strings.
=================================================================================================================================================
#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
	char first_name[20];
	char last_name[20];
	char full_name[50];
	char temp[50];

	cout << "Please insert your first name: ";
	cin >> first_name;

	cout << "Please insert your last name: ";
	cin >> last_name;

	cout << "Hello" << first_name << "your name has " << strlen(first_name) << "characters" << endl;
	cout << "Hello" << last_name << "your name has " << strlen(last_name) << "characters" << endl;

}

/*Other functions are  string_name.getline(50),strcmp(string1,string2),
strcpy(string_in_which_you_want_to_copy,string_to_be_copied)*/

/*The more commonly-used string functions
The nine most commonly used functions in the string library are:

strcat - concatenate two strings
strchr - string scanning operation
strcmp - compare two strings
strcpy - copy a string
strlen - get string length
strncat - concatenate one string with part of another
strncmp - compare parts of two strings
strncpy - copy part of a string
strrchr - string scanning operation


Other functions, such as strlwr or .tolower (convert to lower case), strrev (return the string reversed), and strupr or .toupper
(convert to upper case) may be popular; however, they are neither specified by the C Standard nor the Single Unix Standard. 
It is also unspecified whether these functions return copies of the original strings or convert the strings in place.
*/
