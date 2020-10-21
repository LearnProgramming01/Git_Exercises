/*
void	ft_print_numbers(void)
{
	int num;
	num = 0;
	while( num <= 9)
	{
		write(1,&num,1);
		num++;
	}
	write(1,"\n",1);
}
*/


void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_numbers(void)
{
	char num;
	num = '0';
	while(num <= '9')
	{
		ft_putchar(num);
		num++;
	}
	ft_putchar('\n');
}

/*
void	ft_print_numbers(void)
{
	write(1,"0123456789\n",11); //Another short solution
}
*/
