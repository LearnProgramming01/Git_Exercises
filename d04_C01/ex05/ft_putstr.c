



void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *str)
{
	while(*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}

}
// Another way to write this function
/*
 * void	ft_putstr(char *str)
 * {
 * 	int	i;
 * 	i = 0;
 * 	while(str[i] != '\0')
 * 	{
 * 		ft_putchar(str[i]);
 * 		i++; // don't write str[i]++; it's fault;
 * }
 */
