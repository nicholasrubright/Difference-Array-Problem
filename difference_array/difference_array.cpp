// Given an array of distinct integer values, count the number of pairs of integers that
//have difference k.
#include <iostream>
using namespace std;

int main()
{
	int test[6] = {3, 3, 7, 0, 7, 4};	//create an array with 6 elements
	int k = 4;	//intialize k to 4
	int pairs = 0;		//intialize pairs to 0 for start
	int sizeArray = 6;		//created array size variable

	for (int i = 0; i < sizeArray-1; i++)	//first for loop for iteration of the start index
	{
		for (int j = i+1; j < sizeArray ; j++)	//second for loop to go through each variable next to element i
		{
			if (test[i] - test[j] == k || test[j] - test[i] == k)	//if condition for differnce
			{
				pairs++;	//increments number of pairs if pair found
			}
		}
	}
	cout << pairs;	//displays the number of pairs

	return 0;
}

