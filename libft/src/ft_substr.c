/***************************************************************/
/* Allocates (with malloc(3)) and returns a substring from     */
/* string 's'.                                                 */
/* Returns Null if allocation fails or the substring if        */
/* allocation succeeds.                                        */
/***************************************************************/

//Todo :-
// calculate amout to malloc
// malloc Fails
// (Return NULL)
//  if maloc succeeds
// (Return substring)

//Todo (improved)
/*

    If the input string s is NULL, return NULL.
    If start is greater than the length of s, 
    (return an empty string (or NULL based on your design choice).
    If len is greater than the remaining length of the string from start, adjust len accordingly.



Calculate Memory to Allocate:

    Determine the length of the substring to allocate memory for. This will be len + 1 to account for the null terminator.

Allocate Memory:

    Use malloc to allocate the required memory.
    If malloc fails, return NULL.

Copy the Substring:

    Use a loop or ft_strncpy to copy the substring from s starting at start for len characters.

Null-Terminate the Substring:

    Ensure the new string is null-terminated.

Return the Substring:

    Return the pointer to the newly allocated substring.


*/
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t		s_len;
	size_t		i;
	
	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *) malloc(len +1);
	if (!substr)
		return NULL; // Allocation faled!
	while (i < len)
	{	
		substr[i] = s[start +i];
		i++;
	}
	//Null-terminate
	substr[len] = '\0';
	return (substr);
}
