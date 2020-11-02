
void	swap(int *min_elm, int *high_elm)
{
	int	temp = *min_elm;
	*min_elm = *high_elm;
	*high_elm = temp;
}




void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_elm;
	i = 0;
	while(i < size - 1)
	{	
		min_elm = i;
		j = i + 1;
		while(j < size)
		{        
			if(tab[j] < tab[min_elm])
				 min_elm = j;
			j++;
		}
		swap(&tab[min_elm], &tab[i]);
		i++;
	}	
}	
