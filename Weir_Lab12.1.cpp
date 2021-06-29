//**********************************************
//Programmer: Megan Weir
//Completed : 11/26/2019
//Status    : Complete
//
// This program reads a file and creates a second file that is an encryption of the original.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
#include <fstream>		// file manipulator
#include <cctype>		// character testing header file
using namespace std;	// declare namespace

int main()
{	// variable declarations
	string fileName;
	ifstream infile;
	ofstream outfile;
	char ch;
	
	// retrieve user specified file
	cout << "Input file name to encrypt: ";
	cin >> fileName;
	
	// open user file
	infile.open(fileName.c_str(), ios::in);
	// validate file existance
	if (!infile)
	{
		cout << fileName << " could not be opened.\n";
		return 1;
	}
	
	// read each character from original file and encrypt to new file
	infile.get(ch);
	outfile("encrypted.txt", ios::out);
	while (!infile.fail())
	{	
		outfile.put(ch);
		infile.get(ch+10);
		
	}
	
	// close files
	infile.close();
	outfile.close();
	
	return 0;
}
