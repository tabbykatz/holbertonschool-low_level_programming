#include "holberton.h"
/**
  * swap_int - swapping the value of two integers
  * @*a: points to one value
  * @b: points to the other value
  * Return: void
  */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
