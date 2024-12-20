#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{

	size_t		len_src;
	size_t		len_dst;
	size_t		max_cpy;
	
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);

	/* dstsize == 0, return length of src */
	if (dstsize == 0)
		return (len_src);	
	/* length of dst >= to dstsize, return len_dst + len_src */
	if (len_dst >= dstsize)
	{
		return (dstsize + len_src);
	}
	/* Compute maximim number of chars to copy from src */
	max_cpy = dstsize - len_dst - 1;

	/* Use ft_strlcpy or ft_memcpy to copy from src to dst */
	ft_strlcpy(dst + len_dst, src, max_cpy +1);

	/* Return the total length of string creation attempt  */
	return (len_dst + len_src);
}
