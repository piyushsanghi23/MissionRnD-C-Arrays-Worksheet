/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, j, k, p,temp;
	void * result;
	if (Arr != NULL && len > 0)
	{
		for (i = 0; i < len; i++)
		{
			if (Arr[i]>Arr[i + 1])
			{
				j = i;
				for (k = j; k < len; k++)
				{
					if (Arr[k]>Arr[k + 1])
					{
						p = k;

					}
				}




				temp = Arr[j];
				Arr[j] = Arr[k];
				Arr[k] = temp;
			}
		}
		result = &Arr;
		return result;
	}
	else{
		return NULL;
	}
}