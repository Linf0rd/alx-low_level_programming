/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to encode
 *
 * Return: pointer to the resulting encoded string
 */

char *leet(char *str)
{
	int x, y;
	char leet[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";

	for (x = 0; str[x]; x++)
	{
		for (y = 0; leet[y]; y++)
		{
			if (str[x] == leet[y])
			{
				str[x] = leet_replace[y];
				break;
			}
		}
	}
	return (str);
}
