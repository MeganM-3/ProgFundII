//**********************************************
//Programmer: Megan Weir
//Completed : 10/15/2019
//Status    : Complete - issues with class constructor to define taxRate
//
// This program uses a Tips class to calculate gratuity 
// for a restaurant meal.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
using namespace std;	// declare namespace

// Tips class declaration
class Tips
{
 private:
	double taxRate;				// member variable
	
 public:
	double computeTip(double, double);		// computeTip function prototype
	
	Tips() {								// default constructor
		taxRate = .085;
	}
	
	Tips(double r)							// constructor with 1 argument
	{ taxRate = r; }
	
};

// computeTip function definition 
double Tips::computeTip(double bill, double tipRate)
{
	double tip = (bill/((taxRate/100)+1))*(tipRate/100);
	return tip;
};

int main()
{	// define main() variables
	double r;
	double tipRate;
	double bill;
	double tip;
	char anotherTip;
	
	// collect user input for bill and tax rate
	cout << "This program will compute a restaurant tip based on a total\n";
	cout << "bill amount and the % the patron wishes to tip the server." << endl;
	cout << "\nTax % for this location: ";
	cin >> r;
	
	Tips rate(r);			// class constructor to define taxRate value
	
	// validate tax rate input is greater than 0
	if(r < 0)
	{
		cout << "Tax % cannot be less than 0. Please re-enter tax %: ";
		cin >> r;
	};
	
	// do-while loop to continue calculating tips
	do
	{
		cout << "\n*********** Tip Helper **********\n" << endl;
		cout << "Enter total bill amount: ";
		cin >> bill;
		cout << "Enter the desired tip %: ";
		cin >> tipRate;
		cout << endl;
		
		tip = rate.computeTip(bill, tipRate);
	
		cout << fixed << setprecision(2) << "The tip should be $ " << tip << endl;
		cout << "Compute another tip (y/n)? ";
		cin >> anotherTip;
	
	} while (anotherTip == 'y');
	
return 0;
}


