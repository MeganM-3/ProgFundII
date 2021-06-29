//**********************************************
//Programmer: Megan Weir
//Completed : 11/7/2019
//Status    : Complete
//
// This program sorts two arrays and determines the median value
// using pointer notation.

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manipulator declarations
using namespace std;	// declare namespace

// function prototypes
void sort(int *ptr, int);
void swap(int &, int &);
void printArray(int *ptr, int);
int median(int *ptr, int);
	
int main()
{	
	int arrayMedian;
	int evenArray[] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};
	int oddArray[] = {17, 32, 45, 68, 99, 101, 67, 89, 22};
	
	const int evenSize = 10;
	const int oddSize = 9;
	
	sort(evenArray, evenSize);
	sort(oddArray, oddSize);
	
	cout << "Median of the sorted even array: "<< endl;
	printArray(evenArray, evenSize);
	cout << "\nis " << median(evenArray, evenSize) << endl;
	
	cout << "Median of the sorted odd array: " << endl;
	printArray(oddArray, oddSize);
	cout << "\nis " << median(oddArray, oddSize) << endl;
	
	return 0;
}

void sort(int array[], int SIZE)
{	
	bool madeAswap = true;
	for (int maxElement = SIZE-1; maxElement > 0 && madeAswap; maxElement--)
	{	
		madeAswap = false;
		for (int index = 0; index < maxElement; index++)
		{	
			if (array[index] > array[index+1])
			{	
				swap(array[index], array[index+1]);
				madeAswap = true;
			}
		}
	}
}
	
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void printArray(int *array, int SIZE)
{
	for (int index = 0; index < SIZE; index++)
		cout << *(array + index) << " ";
}

int median(int *array, int SIZE)
{
	int arrayMedian;
	
	if (SIZE==10)
		arrayMedian = (*(array + 4) + *(array + 5))/2;
	else if (SIZE==9)
		arrayMedian = *(array + 4);
	return arrayMedian;
}
