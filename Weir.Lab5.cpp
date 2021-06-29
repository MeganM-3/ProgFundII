//**********************************************
//Programmer: Megan Weir
//Completed : 09/29/2019
//Status    : Complete
//
// This program determines which of a company's four divisions
// had the greatest sales for the quarter.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
#include <math.h>		// math library
#include <string>		// string class
using namespace std;	// declare namespace

// declare global variable data types
double northeast;
double southeast;
double northwest;
double southwest;
string division;
double value;

// function prototypes
double getSales(string division);
void findHighest();

// main function	
int main()
{
	division = "Northeast";			// declaring value assigned to division
	getSales(division);				// for instance of calling getSales function.
	northeast = value; 				// assigning user input value to division
	division = "Southeast";
	getSales(division);
	southeast = value;
	division = "Northwest";
	getSales(division);
	northwest = value;
	division = "Southwest";
	getSales(division);
	southwest = value;
	cout << "\n";
		
	findHighest();				// calling findHighest function
	return 0;
}

// getSales function definition
double getSales(string division)	
{
	cout << "Enter the quarterly sales for the " << division <<" division: ";
	cin >> value;
	if (value < 0)
	{
		cout << "Sales figures cannot be negative. Please re-enter.\n";
		cout << "Enter the quarterly sales for the " << division << " division: ";
		cin >> value; 
	}
}

// findHighest function definition
void findHighest()
{
	// series of if, else if statements to determine highest sales division for the quarter
	// northeast highest sales?
	if (northeast > southeast and northeast > northwest and northeast > southwest)
	{
		cout << "The Northeast division had the highest sales this quarter.\n";
		cout << fixed << setprecision(2) << "Their sales were $" << northeast;
	}
	// southeast highest sales?
	else if (southeast > northeast and southeast > northwest and southeast > southwest)
	{
		cout << "The Southeast division had the highest sales this quarter.\n";
		cout << fixed << setprecision(2) << "Their sales were $" << southeast;
	}
	// northwest highest sales?
	else if (northwest > northeast and northwest > southeast and northwest > southwest)
	{
		cout << "The Northwest division had the highest sales this quarter.\n";
		cout << fixed << setprecision(2) << "Their sales were $" << northwest;
	}
	//s southwest highest sales?
	else if (southwest > northeast and southwest > southeast and southwest > northwest)
	{
		cout << "The Southwest division has the highest sales this quarter.\n";
		cout << fixed << setprecision(2) << "Their sales were $" << southwest;
	}
}		
