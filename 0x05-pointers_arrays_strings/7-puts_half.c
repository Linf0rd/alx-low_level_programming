
/**
 * puts_half - Prints half of a string
 *
 * @str: The string to print
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i, start;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	for (i = start; i < len; i++)
		_putchar(*(str + i));

		_putchar('\n');
}
