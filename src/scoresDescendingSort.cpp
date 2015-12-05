/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.

OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

struct student {
	char name[10];
	int score;
};

void * scoresDescendingSort(struct student *students, int len) {
	int c = 0, d = 0, swap = 0,n=len;
	if (students && len > 0){
		for (c = 0; c < (n - 1); c++)
		{
			for (d = 0; d < n - c - 1; d++)
			{
				if (students[d].score < students[d + 1].score)
				{
					swap = students[d].score;
					students[d].score = students[d + 1].score;
					students[d + 1].score = swap;
				}

			}
		}
	}
	else
		return NULL;
}