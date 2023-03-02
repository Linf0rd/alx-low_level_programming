/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to encode
 *
 * Return: pointer to the resulting encoded string
 */

char *leet(char *str)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leet[j]; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = leet_replace[j];
				break;
			}
		}
	}
	return (str);
}
