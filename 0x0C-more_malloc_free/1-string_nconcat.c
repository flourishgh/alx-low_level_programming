#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Return pointer to point to new allocated space in memeory.
 *
 * Description: Return pointer
 * @s1: The first string.
 * @s2: The second string.
 * @n: number of space.
 * Return: Return A pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int s1len = 0;
	int s2len = 0;
	int a,b,c,d;
	int len;

	n=n+1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		s1len++;

	for (b = 0; s2[b]; b++)
		s2len++;

	len = s1len + s2len;

	concat = malloc(sizeof(char) * len + 1);

	if (concat == NULL)
		return (NULL);

	for (c = 0; c < s1len; c++)
		concat[c] = s1[c];

	for (d = s1len; d < s2len+1; d++)
		concat[d] = s2[d - s1len];

	concat[len] = '\0';

	return (concat);
}
