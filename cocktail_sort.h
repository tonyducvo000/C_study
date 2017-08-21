#ifndef COCKTAIL_H
#define COCKTAIL_H

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

#endif
