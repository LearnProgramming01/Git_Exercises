
void	ft_putchar(char c);

void	ft_display_hex(char param)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if( param >= 16 )
		ft_putchar(hexa[param / 16]);
	else
		ft_putchar('0');
	ft_putchar(hexa[param % 16]);
}


void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
		{	
			ft_putchar('\\');
			ft_display_hex(*str);
		}
		str++;
	}
}
