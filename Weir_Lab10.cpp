//**********************************************
//Programmer: Megan Weir
//Completed : 11/17/2019
//Status    : Complete - Instructions indicate that the average
//						 should be printed in main. I was unable to
//						 perform this request and had the average printed
//						 as part of the avgMovies() function.
//
// This program gathers statistical data of the number of movies that
// college students see in  month.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
#include <cmath>		// math algorithms
using namespace std;	// declare namespace

// function prototypes
void getMovies(int *ptr, int *);
void sort(int *ptr, int *);
void swap(int &, int &);
void displayMovies(int *ptr, int *);
double avgMovies(int *ptr, int *);
	
int main()
{	// variable declarations
	int *students, *moviePtr;
	students = new int;
		
	cout << "How many students were surveyed? ";	
	// gather and validate user input data
	do
	{ 
		cin >> *students;
		// allocate to array
		moviePtr = new int[*students];
		
		if (*students<0)
		{
			cout << "\n\nNumber of students should be greater than or equal to 0." 
					"\nEnter how many students were surveyed: ";
			cin >> *students;
		}
	} while (students<0);
	
	// function calls
	getMovies(moviePtr, students);
	sort(moviePtr, students);
	displayMovies(moviePtr, students);
	avgMovies(moviePtr, students);
	
	delete [] moviePtr;				// free allocated array
	return 0;
}

// sort function
void sort(int *array, int *SIZE)
{
	bool madeAswap = true;
	for (int maxElement = (*SIZE-1); maxElement > 0 && madeAswap; maxElement--)
	{	
		madeAswap = false;
		for (int index = 0; index < maxElement; index++)
		{	
			if (*(array+index) > *(array+(index+1)))
			{	
				swap(*(array+index), *(array+(index+1)));
				madeAswap = true;
			}
		}
	}
}

// swap function required for sort function
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void getMovies(int *array, int *index)
{
	cout << "\n";
	for (int i=0; i<*index; i++)
	{	// gather and validate user input data
		cout << "Enter the number of movies watched by student " << (i+1) << ": ";
		cin >> *(array+i);
	
		if (*(array+i)<0)
		{
			cout << "Number of movies watched must be greater than or equal to 0."
					"Enter the number of movies watched by student" << (i+1)<< ": ";
			cin >> *(array+i);			
		}
	}
	
}
// function definitions outside of main()
void displayMovies(int *array, int *index)
{
	cout << "\nNumber of Movies Watched:"
			"\n-------------------------" << endl;
	// print array values
	for(int count=0; count<*index; count++)
		cout << *(array+count) << endl;
	
	cout << "--------" << endl;
}

double avgMovies(int *array, int *index)
{	
	double sum = 0;
	// sum array values
	for (int i=0; i<*index; i++)
	{
		sum+= *(array+i);
	}
	// find average
	double avg=(sum/(*index));
	cout << fixed << setprecision(1) << "Average: " << avg;
	
	return avg;
}
