//**********************************************
//Programmer: Megan Weir
//Completed : 11/26/2019
//Status    : Complete
//
// This program accepts a sentence where each word is capitalized without any spaces
// and returns the sentence correctly capitalized and spaced.
// Ex: 'StopAndSmellTheRoses' would be returned as 'Stop and smell the roses'.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
#include <string>		// string manipulator
#include <cctype>		// character testing header file
using namespace std;	// declare namespace

int main()
{	// variable declarations
	string phrase;
	string output;
	
	// Retrieve user input sentence
	cout << "\nEnter a sentence to be processed:\n";
	getline(cin, phrase);
	
	output += phrase[0];			// first character should remain capitalized
	
	// process following characters to add space and change to lower case
	for(int i = 1; i < phrase.size(); i++)
	{
		if(isupper(phrase[i]))
		{
			output += ' ';
			output += tolower(phrase[i]);	
		}
		else 
		{
			output += phrase[i];
		}
	}
	// output processed phrase
	cout << output;
	
	return 0;
}
