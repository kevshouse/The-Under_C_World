/*Outputs the string 's' to the given file descriptor followed */
/* by a newline.                                               */
/***************************************************************/
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{	// Null 's' case
	if (s)
	{
		ft_putstr_fd(s, fd);
	}
	ft_putchar_fd('\n', fd);
}


