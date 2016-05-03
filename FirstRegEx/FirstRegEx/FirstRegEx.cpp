// FirstRegEx.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
	/*

	\d		any number
	\D		anything but a number
	\s		any space
	\S		anything but a space
	\w		any character
	\W		anything but a character
	.		any character other than endline
	\b		any space that preceeds or(maybe and) follows a word

	RegEx to gather addresses of the format 123 Main St.

	\d{1,5}			
	\s			    
	\w+
	\s
	\w+
	\.
	
	OR

	\d{1,5}\s\w+\s\w+\.

	*/
	cout << "Hello world." << endl;
	cout << "Hello again." << endl;
	
    return 0;
}

