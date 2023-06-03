/**
 * cap_string - capitalizes all words of a string
 * @s: pointer to the string to be modified
 *
 * Return: pointer to the modified string
 */

char *cap_string(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if ((x == 0 || s[x - 1] == ' ' || s[x - 1] == '\t' ||
		s[x - 1] == '\n' || s[x - 1] == ',' || s[x - 1] == ';' ||
		s[x - 1] == '.' || s[x - 1] == '!' || s[x - 1] == '?' ||
		s[x - 1] == '"' || s[x - 1] == '(' || s[x - 1] == ')' ||
		s[x - 1] == '{' || s[x - 1] == '}') &&
		(s[x] >= 'a' && s[x] <= 'z'))
		{
			s[x] = s[x] - 32;
		}
	}

	return (s);
}

