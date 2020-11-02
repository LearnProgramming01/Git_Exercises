
void	ft_print_alphabet(void)
{
	char alpha_min;
	alpha_min = 'a';
	while( alpha_min <= 'z')
	{
		write(1,&alpha_min,1);
		alpha_min++;
	}
	write(1,"\n",1);
}

