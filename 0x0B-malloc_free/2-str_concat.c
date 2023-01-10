#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatrnates
 * @s1: dtring
 * @s2:string
 * Return: answer
 */
char *str_concat(char *s1, char *s2)
{
	char *strnew = NULL;
	unsigned int i;
	int n1;
	int n2;
	int count;

	count = 0;

	if (s1 == NULL)
		s1 = "";
	for (n1 = 0; s1[n1] != '\0'; n1++)
		;
	for (n2 = 0; s2[n2] != '\0'; n2++)
		;
	strnew = (char *)malloc((n1 + n2 + 1) * sizeof(char));

	if (strnew == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		strnew[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		strnew[i] = s2[count];
		count++;
	}
	return (strnew);
}
