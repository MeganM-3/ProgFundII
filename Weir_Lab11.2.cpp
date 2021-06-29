//**********************************************
//Programmer: Megan Weir
//Completed : 11/26/2019
//Status    : Complete
//
// This program manipulates the case from an input sentence and will
// output the original case structure, an uppercase version, a lowercase
// version, and an inverted case structure of the original sentence. 

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
#include <string>		// string manipulator
#include <cctype>		// character testing
using namespace std;	// declare namespace

// function prototypes
void upper(char [], int);
void lower(char [], int);
void flip(char [], int);
	
int main()
{	// variable declarations
	string original;
	
	cout << "Enter a sentence to be case manipulated:\n\t";
	getline(cin, original);
	
	char phrase[original.length()];	

	
	cout << "\n\nOriginal input sentence:\n";
	cout << original << endl;
			
	for (int i=0; i<original.length(); i++)
	{
		phrase[i] = original[i];
		
	}
	
	flip(phrase, original.length());
	upper(phrase, original.length());
	lower(phrase, original.length());
	
	return 0;
}

void upper(char array[], int SIZE)
{
	cout << "\n\nConverted to all uppercase:\n";
	for(int i=0; i<SIZE; i++) 
	{
		array[i] = toupper(array[i]);
		cout << array[i];
	}

}

void lower(char array[], int SIZE)
{
	cout << "\n\nConverted to all lowercase:\n";
	for(int i=0; i<SIZE; i++) 
	{
		array[i] = tolower(array[i]);
		cout << array[i];
	}

}

void flip(char array[], int SIZE)
{
	cout << "\n\nConverted to inverted case:\n";
	for(int i=0; i<SIZE; i++)
	{
		if(isupper(array[i]))
		{
			array[i] = tolower(array[i]);
		} 
		else
		{
			array[i] = toupper(array[i]);
		}
		cout << array[i];
	}
}
