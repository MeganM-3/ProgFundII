//**********************************************
//Programmer: Megan Weir
//Completed : 09/10/2019
//Status    : Complete
//
// This program will tell you how long it takes a sound wave to
// travel a specific distance through a particular medium.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
using namespace std;	// declare namespace

int main()
{
	//define variable data types
	float feet;
	int substance;
	
	//output program purpose message
	cout << "This program will tell you how long it takes a sound wave";
	cout << "\nto travel a specific distance through a particular medium.\n";
	
	//output message and obtain user selection
	cout << "Select a substance for the sound to travel through:\n";
	cout << "\t1. Air\n\t2. Water\n\t3. Steel\n";
	cin >> (substance);
	
	//'if else' statement to check user selection validity
	//terminates program with message if invalid
	if (substance == 1|| substance == 2|| substance == 3)
	{
		//obtain feet from user
		cout << "\nEnter the number of feet the sound wave will travel: ";
		cin >> feet;
		
		//'if else' statements to determine appropriate output for calculated time message
		if(substance == 1)
		{
			cout << "The sound wave will travel " << feet << " feet through water in " << fixed << setprecision(4) << (feet/1100) << " seconds.";
		}
		else if (substance == 2)
		{
			cout << "The sound wave will travel " << feet << " feet through water in " << fixed << setprecision(4) << (feet/4900) << " seconds.";	
		}
		else if (substance == 3)
		{
			cout << "The sound wave will travel " << feet << " feet through water in "<< fixed << setprecision(4) << (feet/16400) << " seconds.";
		}
	}
	else
	{
		cout << "Invalid entry.";
	}
	
	return 0;
}
	
