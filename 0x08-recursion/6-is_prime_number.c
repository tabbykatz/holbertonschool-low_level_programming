#include "holberton.h"
/**
  * _isitprime - looks for prime
  * @n: the number
  * @i: the number / 2
  *
  * Return: 1 if prime, 0 if not
  */
int _isitprime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else
	{
		if (n % i == 0)
			return (0);
		else
			return (_isitprime(n, i - 1));
	}
}
/**
 * is_prime_number - looks for prime
 * @n: the number
 * Return: 1 if orime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n % 2 == 0)
		return (0);
	else
		return (_isitprime(n, n / 2));

}
