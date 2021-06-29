//**********************************************
//Programmer: Megan Weir
//Completed : 09/22/2019
//Status    : Complete
//
// This program produces bar graphs for today's sales
// for 3 stores.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
#include <math.h>		// math library
using namespace std;	// declare namespace

int main()
{	//declare variables
	float store1;	//sales for store 1
	float store2;	//sales for store 2
	float store3;	//sales for store 3
	float sales;
	
	//Acquire user input sales data for each store
	cout << "Enter today's sales for Store 1: ";
	cin >> store1;
	if (store1 < 0)		//Validate value is greater than 0
	{					
		cout << "Please enter a positive number for Store 1: ";
		cin >> store1;
	}
	//sales data for store #2	
	cout << "Enter today's sales for Store 2: ";
	cin >> store2;	
	if (store2 < 0)
	{
		cout << "Please enter a positive number for Store 2: ";
		cin >> store2;
	}
	//sales data for store #3	
	cout << "Enter today's sales for Store 3: ";
	cin >> store3;
	if (store3 < 0)
	{
		cout << "Please enter a positive number for Store 3: ";
		cin >> store3;
	}
	
	//Output graph header
	cout << "\n";
	cout << setw(15) << "DAILY SALES" << " " << endl;
	cout << setw(17) << "(each * = $100)" << " " << endl;
	
	//Output graphs from user input
	store1 = round(store1/100);
	cout << "\nStore 1: ";
	while (store1 > 0)				//while loops to output 1 asterisk per $100
	{
		cout << "*";
		store1--;
	}
	
	store2 = round(store2/100);
	cout << "\nStore 2: ";
	while (store2 > 0)
	{
		cout << "*";
		store2--;
	}
		
	store3 = round(store3/100);
	cout << "\nStore 3: ";
	while (store3 > 0)
	{
		cout << "*";
		store3--;
	}
			
	return 0;
}
