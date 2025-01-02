/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:08:54 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 15:29:27 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_memcpy                                                     */
/*								*/
/*If (src && dst == NULL), 					*/
/*	return dst						*/
/*Cast both dst and src temp pointers to unsigned '*'		*/
/*Iterate dst tmp '*' --while(NOT reahed (n)			*/
/*Set current byte of dst tmp '*' = curr byte of src tmp '*'	*/
/*Return dst '*'							*/
/*Collision check! I need to src is ovelapping with dst, is so, */
/*I must copy in reverse (top down).                            */
/*                                                              */
/*Checking for overlapping memory regions (though the 		*/
/*standard does not guarantee safe behavior for overlapping 	*/
/*regions). 							*/
/*Using optimized assembly instructions or CPU-specific features*/
/*(like SIMD) to perform the copy operation efficiently.        */
/* Looping through the memory in chunks (e.g., copying 4 or 	*/
/* 8 bytes at a time) to minimize the number of memory accesses.*/
/****************************************************************/
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	d = dst;
	s = src;
	if (!dst && !src)
		return (NULL);
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
