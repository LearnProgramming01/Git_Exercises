// it's The same code lol :D
void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	a = 0;
	while( a <= 7)
	{
		b = a + 1;
		while(b <= 8)
		{
			c = b + 1;
			while(c <= 9)
			{
				ft_putchar(a % 10 + 48);
				ft_putchar(b % 10 + 48);
				ft_putchar(c % 10 + 48);
				if( a != 7 || b != 8 || c != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	ft_putchar('\n');
}


