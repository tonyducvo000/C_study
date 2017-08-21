// testnumbahtwo.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

void cocktail_sort( int arr[], int size );
void output(int myarray[], int size);

int main() {

	int my_array[] = {999, 34, 534, 23, 1000, 2, 0, 32, 1, 777};
	int arrary_size = sizeof(my_array) / sizeof(int);
	cocktail_sort(my_array, arrary_size);

	output(my_array, arrary_size);
	system("PAUSE");
	return 0;
	
	
}

void cocktail_sort ( int arr[], int size ) {
	bool swapped = true;
	int start = 0;
	int end = size - 1;

	while (swapped)
	{	
		swapped = false;

		for (int i = start; i < end; ++i)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = true;
			}
		}
	 
		if (!swapped){
			break;
		}
	
		swapped = false;

		end--;

		for (int i = end - 1; i >= start; --i)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = true;
			}
		}

		start++;
	}
}

void output( int myarray[], int mysize) {

	for (int i = 0; i < mysize; i++ ) {
		cout << myarray[i] << endl;
	}
}
