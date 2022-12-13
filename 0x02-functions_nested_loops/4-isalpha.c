#include "main.h"

/**
 * _isalpha - checks for alphabets
 *@c: char to check
 *
 * Return:1 if correct  else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
