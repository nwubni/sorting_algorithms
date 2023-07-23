#include "sort.h"

/**
* swap - Swaps to variables
* @a: First parameter
* @b: Second parameter
* Return: void
*/

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

