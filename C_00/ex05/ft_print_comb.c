



void	ft_putchar(char c)
{
	write(1,&c,1);
}


void	comma_space_condition(char a, char b, char c)
{
	if(a != '7' || b!= '8' || c!= '9')
	{
		ft_putchar(',');
		ft_putchar(' ');

	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;
	a = '0';
	while(a <= '9')
	{
		b = a + 1;
		while(b <= '9')
		{
			
			c = b + 1;
			while(c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
		a++;
	}
	ft_putchar('\n');
}

