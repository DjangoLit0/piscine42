#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	write(1, "&letter", 1);
	while (letter >= 'z')
		letter ++;
}
