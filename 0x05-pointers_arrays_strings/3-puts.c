/**
 * _puts - Prints a string to stdout and a new line.
 * @str: Pointer to the string to print.
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}

