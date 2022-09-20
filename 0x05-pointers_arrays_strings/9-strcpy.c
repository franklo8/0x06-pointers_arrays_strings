#include "main.h"

/**
 * _strcpy - Callout function
 *
 * @dest: destination
 * @src: source
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
