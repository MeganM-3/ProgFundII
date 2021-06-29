//**********************************************
//Programmer: Megan Weir
//Completed : 10/19/2019
//Status    : Complete
//
// This program calculates gross pay from a file containing hours worked 
// and hourly rate nfor employees.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
#include <fstream>		// file stream
using namespace std;	// declare namespace

// PayRoll class declaration
class PayRoll
{
 private:
	double hourlyRate;				// member variables
	double hours;				
	
 public:
	double calcGrossPay();			// function prototype
	
	void setRate(double r)
	{ hourlyRate = r; 
	}
	
	void setHours(double h)
	{ hours = h; 
	}
};

// grossPay function definition 
double PayRoll::calcGrossPay()
{	return hours*hourlyRate; 
};

int main()
{	// define main() variables

	const int employees = 7;		
	int count = 0;
	double h;
	double r;
	PayRoll payroll[employees];			// define array of Payroll objects
	
	ifstream inputFile;				// input file stream object
	
	inputFile.open("payroll.dat");
	while (count < employees)
	{	inputFile >> h >> r;
		payroll[count].setHours(h);
		payroll[count].setRate(r);
		count++;
	}
	
	cout << "Employee  Gross pay" << endl;
	cout << "========  =========" << endl;
	for (count = 0; count < employees; count++)
	{	cout << fixed << setprecision(2) << "   " << (count+1) << ": \t  $ "
			 << payroll[count].calcGrossPay() << endl;		
	}
	
	return 0;
}
