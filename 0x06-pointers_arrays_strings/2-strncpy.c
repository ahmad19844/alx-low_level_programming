#include "main.h"

/**
 * _strncpy - cpoies n bytes of src to the dest string
 * @dest: string to copy to 
 * @src: string being copied
 * @n: largest number of bytes to copy
 *
 * Return: address of destt
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[indesx ++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	
	return(dest);
}
