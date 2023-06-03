/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] == s2[x]; x++)
	{
		if (s1[x] == '\0')
			return (0);
	}

	return (s1[x] - s2[x]);
}
