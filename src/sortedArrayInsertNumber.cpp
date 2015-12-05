/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h> 
void update(int *Arr, int len, int j, int num);
int * sortedArrayInsertNumber(int *Arr, int len, int num)
{


	if (Arr && len > 0)
	{
		int i = 0, j = 0, temp = 0;
		int *newarr = (int *)calloc(len + 1, sizeof(int));
		for (i = 0; i < len; i++)
		{
			temp = Arr[i];
			newarr[i] = temp;
		}
		for (i = 0; i < len; i++)
		{
			if (newarr[i]<num && newarr[i + 1]>num)
			{
				j = i + 1;
				update(newarr, len, j, num);
				break;

			}
			if (newarr[0]>num)
			{
				j = 0;
				update(newarr, len, j, num);
				break;
			}
			if (newarr[len - 1]<num)
			{
				newarr[len] = num; break;
			}
		} return  newarr;
	}
	else
		return NULL;
}
void update(int *newarr, int len, int j, int num)
{
	int k = 0;
	for (k = len - 1; k >= j; k--)
	{
		newarr[k + 1] = newarr[k];

	}
	newarr[j] = num;
}
