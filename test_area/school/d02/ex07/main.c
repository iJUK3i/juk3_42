#include <unistd.h>

void	ft_print_combn(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	ft_print_combn(2);
   return 0;
}   
