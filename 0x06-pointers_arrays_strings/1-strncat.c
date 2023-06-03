/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be used from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int x;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[dest_len + x] = src[x];
	dest[dest_len + x] = '\0';
	return (dest);
}

