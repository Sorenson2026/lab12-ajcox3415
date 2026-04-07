/* This prgram will get intiger values from the keyboard, print the integers into a a two dimentinal array row by row,
and find the totals of each column. 
AJ Cox
4/7/2026*/

#include <iostream>
#include <iomanip>
using namespace std;

void fillArray(int inputArr[][6], int rows);
void printArray(int printArr[][6], int rows);
void calcTotals(int calcTotalsArr[][6], int rows);

// This main will call the other functions
int main()
{
	int data[5][6];

	// function calls
	fillArray(data, 5);
	printArray(data, 5);
	calcTotals(data, 5);

	return 0;
}

// this function will get inputs from the user.
void fillArray(int inputArr[][6], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			// get inputs
			cout << "Please enter a number for [" << i << "] [" << j << "]: ";
			cin >> inputArr[i][j];
		}
	}
		
}

// This function will print the inputs on screen row by row
void printArray(int printArr[][6], int rows)
{
	cout << endl; 
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			// displays inputs
			cout << setw(5) << printArr[i][j];
		}
		cout << endl;

	}
}

// Calculates totals
void calcTotals(int calcTotalsArr[][6], int rows)
{
	for (int dash = 0; dash < 30; dash++)
	{
		cout << "-"; 
	}
	cout << endl;
	for (int j = 0; j < 6; j++)
	{
		int total = 0;
		for (int i = 0; i < rows; i++)
		{
			// does calculations
			total += calcTotalsArr[i][j];
			
		}
		cout << setw(5) << total;
	}
	cout << endl;
}
