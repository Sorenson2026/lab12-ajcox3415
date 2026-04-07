/* This prgram will get intiger values from the keyboard, print the integers into a a two dimentinal array row by row,
and find the totals of each column. 
AJ Cox
4/7/2026*/

#include <iostream>
#include <iomanip>
using namespace std;

void fillArray(int inputArr[][6], int rows);
void printArray(int printArr[][6], int rows);

// This main will call the other functions
int main()
{
	int data[5][6];

	// function calls
	fillArray(data, 5);
	printArray(data, 5);

	return 0;
}

// this function will get inputs from the user.
void fillArray(int inputArr[][6], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << "Please enter a number for [" << i << "] [" << j << "]: ";
			cin >> inputArr[i][j];
		}
	}
		
}

// This function will print the inputs on screen row by row
void printArray(int printArr[][6], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << setw(5) << printArr[i][j];
		}
		cout << endl;

	}
}
