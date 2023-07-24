#include "sort.h"
/**
* swap- swaps two values
* @first: first in to be swapped
* @second: second value to be swaped
* Return: void
*/
void swap(int *first, int *second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}
