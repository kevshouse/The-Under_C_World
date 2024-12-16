#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
	//unsigned char *tmp_src = (unsigned char *)src;
	//unsigned char *tmp_dst = (unsigned char *)dst;
	char *d = (char *)dst;
	const char *s = (const char *)src;
	
	if (d == s || n== 0)
	{
		return dst;
	}
	
	if (d < s)
	while (n-- > 0)
	{
		*d++ = *s++;
	}
	else
	{
		s += n; //move to end of src
		d += n; //move to end of dst
		while (n-- > 0) // copy reverse
		{
			*(--d) = *(--s);
		}
	}
	return dst;
}
