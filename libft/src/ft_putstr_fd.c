#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}

int main(void) {

    // Test strings to output

    char *test_str1 = "Hello, World!";

    char *test_str2 = "This is a test of ft_putstr.";

    char *test_str3 = "Goodbye!";


    // Output to standard output (file descriptor 1)

    printf("Testing my ft_putstr:\n");


  ft_putstr_fd(test_str1, 1); // Should print "Hello, World!"

    ft_putstr_fd("\n", 1);      // Print a newline for separation

    ft_putstr_fd(test_str2, 1); // Should print "This is a test of ft_putstr_fd."

    ft_putstr_fd("\n", 1);      // Print a newline for separation

    ft_putstr_fd(test_str3, 1); // Should print "Goodbye!"

    ft_putstr_fd("\n", 1);      // Print a newline for cleanliness


    return 0;

}
