// Very imporatnt !!!!!!!!!

/*
 *You must to visit this site if you really want to know clearly the difference between -strcpy()- -strncpy()- -strlcpy)-
 * and their problems.
 * https://lwn.net/Articles/507319/
 * Check also this it's very important : https://www.qnx.com/developers/docs/7.0.0/#com.qnx.doc.neutrino.lib_ref/topic/s/strlcat.html
 */

// The argument size is the size 
// of destination buffer.
unsigned int	ft_strlcpy(char *dest, char src, unsigned int size)
{

	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while ((src[i] != '\0') && ( i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	return (i);
}

