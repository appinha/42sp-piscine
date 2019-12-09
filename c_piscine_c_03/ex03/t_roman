char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int c;
	unsigned int d;
	
	c = 0;
	d = 0;
	while (dest[c] != '\0')
		c++;
	while (src[d] != '\0' && d < nb)
	{
		dest[c + d] = src[d];
		d++;
	}
	dest[d + c] = '\0';
	return (dest);
}