/**
* rev_string - Reverses a string.
* @s: A pointer to the string to be reversed.
*
* Return: void.
*/
void rev_string(char *s)
{
	int i, j;
	char tmp;

	if (s == NULL)
		return;

	for (j = 0; s[j] != '\0'; j++)
		;

	for (i = 0, j -= 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
