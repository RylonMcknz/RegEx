// FirstRegEx.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include <regex>

using namespace std;

int main()
{
	/*
	REGEX SYMBOLS WITH EXAMPLES IN RESPECTIVE ORDER.

	.			any character other than endline
	?			makes the preceding token optional
	*			makes the preceding token optional in any amount
	+			one or more of the preceding token
	[...]	    any ONE character in the brackets
	[^...]		any token not in the brackets
	[...]{a,b}	any combination of characters in brackets with length a to b (can do {,b} or {a,})
	|			any token before OR after |
	

	

	*/
	string str;
	while (true) {
		cin >> str;
		
		//----- Here things can be added for more dynamic matching.

		//This one allows "abc" along with any char, i.e., "abcp"
		//regex e("abc.");

		//This one allows "abc" or "ab", the c is optional
		//regex e("abc?");

		//This one allows zero or any number of "c", i.e., "ab" or "abccccc"
		//regex e("abc*");

		//This one allows one or more of the preceding token, i.e., "abc" or "abcc"
		//regex e("abc+");

		//This one allows one of the char in brackets as an option, i.e., "ab" or "ac"
		//regex e("a[bc]");

		//This one allows something that is not in the brackets, i.e., "abfffff"
		regex e("ab[^cd]");

		bool match = regex_match(str, e);

		cout << (match ? "Matched" : "Not matched") << endl;

	}
		
    return 0;
}

