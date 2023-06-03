/**
 * _strncpy - copies up to n characters from the source string to the destination
 * string, and then adds a terminating null byte
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to be copied
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
