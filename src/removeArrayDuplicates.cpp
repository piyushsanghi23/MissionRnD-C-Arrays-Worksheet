/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>
void update_d(int *Arr, int len, int c,int k)
{
	int i = 0;
	for (i = c + 1; i < len; i++)
	{
		Arr[i] = Arr[k+1];
		k++;
	}
}


void * removeArrayDuplicates(int *Arr, int len)
{
	int c = 0, d = 0, swap = 0, n = len,k = 0,temp=0;
	if (Arr && n > 0){
		for (c = 0; c < (n - 1); c++)
		{
			for (d = 0; d < n - c - 1; d++)
			{
				if (Arr[d] > Arr[d + 1]) 
				{
					swap = Arr[d];
					Arr[d] = Arr[d + 1];
					Arr[d + 1] = swap;
				}
			}
			
		}
		for (c = 0; c < (n - 1); c++)
		{
			temp = Arr[c];
			k = c;
			while (Arr[k + 1] == temp)
			{
				k++;
			}
			if (c != k)
			{
				update_d(Arr, len, c, k);
			}
		}
		
	}
	else
	return NULL;
}