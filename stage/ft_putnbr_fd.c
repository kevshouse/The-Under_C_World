#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
	//int		int_limit;
	
	//int_limit = -2147483648;
	// n = negative int_limit - early recurse as positive n
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);// preserve sign
		ft_putchar_fd('2', fd);// OP first char
		ft_putnbr_fd(147483648, fd);
		return;
	}
	// Negative ints
	if (n < 0) 
	{
		ft_putchar_fd('-', fd);// preserve sign
		n = -n; // make n pos
	}
	// ints zero and above
	if (n >= 10)// Intdivision to digit strip then remainder
	{
		ft_putnbr_fd(n/10, fd);//Next digit recursion		
	}
	// We are here because we only have a single digit
	//ASCII convert
		ft_putchar_fd((n%10) + '0', fd);// OP last digit	
}
