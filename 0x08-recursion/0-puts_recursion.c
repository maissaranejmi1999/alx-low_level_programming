#include <unistd.h>
#include <main.h>

void _puts_recursion(char *s)
{
	if (s == '\0')
		return;
	write(1, &s, 1);
	_puts_recursion(s - 1);
}
