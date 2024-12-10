#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
/* Get the original length of src and dst */
/* If the length of dst is greater than or equal to dstsize, */
/* return the length of dst + length of src (no concatenation occurs) */
/**/
/**/
/* If dstsize is large enough to accommodate both src and dst, */
/* concatenate src at the end of dst and ensure null-termination */
/**/
/**/
/* If dstsize is not large enough, concatenate up to dstsize - 1 characters */
/* from src to dst, ensuring null-termination */
/* Return the total length of the string that was attempted to be created, */
/* which is the original length of dst + length of src */

	size_t		len_src;
	size_t		len_dst;
	size_t		i;
	size_t		max_cpy;
	
	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	/*len of dst greater or equall to dstsize */
	/* npt concat!				  */
	if (len_dst >= dstsize)
	{
		return (len_dst + len_src);
	}
	max_cpy = dstsize - len_dst - 1;
	while(i++ < max_cpy && src[i] != '\0'
		{
			dst[i + len_dst] = src[i];
			i++;
		}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
