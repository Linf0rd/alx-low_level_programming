/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int x;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (x = 0; src[x] != '\0'; x++)
		dest[dest_len + x] = src[x];
	dest[dest_len + x] = '\0';
	return (dest);
}
