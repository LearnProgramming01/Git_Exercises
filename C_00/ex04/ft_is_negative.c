/*
void	ft_is_negative(int n)
{
	
	if( n < 0)

		write(1,"N",1);
	
	else
		write(1,"P",1);
	write(1,"\n",1);
}
*/
void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_is_negative(int n)
{
	if ( n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
	ft_putchar('\n');
}

