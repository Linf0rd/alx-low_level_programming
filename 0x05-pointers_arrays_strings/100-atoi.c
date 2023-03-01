/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int res = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
		res = res * 10 + (s[i] - '0');
		if (s[i + 1] < '0' || s[i + 1] > '9')
		{
			break;
		}
		}
		i++;
	}

	return (res * sign);
}
