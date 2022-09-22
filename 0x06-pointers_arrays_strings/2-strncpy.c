#include "main.h"

/**
 * _strncpy - copies n bytes of src to the dest string
 * @dest: string to copy to 
 * @src: string being copied
 * @n: largest number of bytes to copy
 *
 * Return: address of destt
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	
	return(dest);
}
