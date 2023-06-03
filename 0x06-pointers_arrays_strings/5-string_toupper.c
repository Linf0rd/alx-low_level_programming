/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer to the string to be modified
 *
 * Return: pointer to the modified string
 */

char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	if (s[x] >= 'a' && s[x] <= 'z')
		{
		s[x] = s[x] - 32;
		}
	}

	return (s);
}
