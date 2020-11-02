
void	ft_print_reverse_alphabet(void)
{
	char alpha_min_reverse;
	alpha_min_reverse = 'z';
	while(alpha_min_reverse >= 'a')
	{
		write(1,&alpha_min_reverse,1);
		alpha_min_reverse--;
	}
	write(1,"\n",1);
}
