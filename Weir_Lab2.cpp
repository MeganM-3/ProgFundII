//**********************************************
//Programmer: Megan Weir
//Completed : 09/06/2019
//Status    : Complete
//
// This program receives user input of property and assessed value
// to calculate property tax.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
using namespace std;	// declare namespace

int main()
{
	//define data type for propertyValue and tax
	double propertyValue;
	double taxRate;
	
	//set formatting
	cout << fixed << setprecision(2);
	
	//obtain property value and tax rate
	cout << "Enter the actual property value: $";
	cin >> propertyValue;
	cout << "Enter the amount of tax per $100 of assessed value: $";
	cin >> taxRate;
    
    //calculate assessed value
    double assessedValue = 0.6 * propertyValue;
    
    //calculate property tax
    double propertyTax = assessedValue/100 * taxRate;
    
    //output property, assessed, and property tax values
    cout << "Property Value: $ " << setw(10) << propertyValue << "\n";
    cout << "Assessed Value: $ " << setw(10) << assessedValue << "\n";
    cout << "Property Tax:	$ " << setw(10) << propertyTax << "\n";
    
    return 0;

}
