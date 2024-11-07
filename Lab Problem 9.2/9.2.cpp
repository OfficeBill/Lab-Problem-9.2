// File Name:     Lab Problem 9.2
// Author:        William Inkrott
// Date:          11/07/24
// Description:   Check to see if an array is increasing or decreasing and if there are any duplicates present. Nice. 

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

int main(void)
{
	int i = 0, size = 6, values[6];
	bool trueFalse;
	for (i = 0; i < 6; i++)
	{
		cout << "Enter integer #" << i << ": ";
		cin >> values[i];
	}
	trueFalse = isSortedIncreasing(values, size);
	if (trueFalse == true)
	{
		cout << "The data are increasing." << endl;
	}
	else
	{
		cout << "The data are not increasing." << endl;
	}
	trueFalse = isSortedDecreasing(values, size);
	if (trueFalse == true)
	{
		cout << "The data are decreasing." << endl;
	}
	else
	{
		cout << "The data are not decreasing." << endl;
	}
	trueFalse = hasAdjacentDuplicates(values, size);
	if (trueFalse == true)
	{
		cout << "The data has adjacent duplicates." << endl;
	}
	else
	{
		cout << "The data does not have adjacent duplicates." << endl;
	}
	trueFalse = hasDuplicates(values, size);
	if (trueFalse == true)
	{
		cout << "The data has duplicates." << endl;
	}
	else
	{
		cout << "The data does not have duplicates." << endl;
	}
}

bool isSortedIncreasing(int values[], int size)
{
	bool trueFalse = true;
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] < values[i + 1])
		{
			trueFalse = true;
		}
		if (values[i] > values[i + 1])
		{
			return false;
		}
	}
	return true;
}

bool isSortedDecreasing(int values[], int size)
{
	bool trueFalse = true;
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] > values[i + 1])
		{
			trueFalse = true;
		}
		if (values[i] < values[i + 1])
		{
			return false;
		}
	}
	return true;
}

bool hasAdjacentDuplicates(int values[], int size)
{
	bool trueFalse = false;
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] == values[i + 1])
		{
			trueFalse =  true;
		}
	}
	return trueFalse;
}

bool hasDuplicates(int values[], int size)
{
	if (values[0] == values[1] or values[0] == values[2] or values[0] == values[3] or values[0] == values[4] or values[0] == values[5] or values[1] == values[2] or values[1] == values[3] or values[1] == values[4] or values[1] == values[5] or values[2] == values[3] or values[2] == values[4] or values[2] == values[5] or values[3] == values[4] or values[3] == values[5] or values[4] == values[5])
	{
		return true;
    }
	else
	{
		return false;
	}
}