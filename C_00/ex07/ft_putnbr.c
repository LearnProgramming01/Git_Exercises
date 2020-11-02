
void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putnbr(int nb)
{
	long int x;
	x = nb;
	
	if(x < 0)
	{
		ft_putchar('-');
		x = x * -1;
	}
	if( x >= 10)
	{
		ft_putnbr(x / 10);
	}
	ft_putchar( x % 10 + 48);
}

