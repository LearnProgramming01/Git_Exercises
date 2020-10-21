

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	start = 0;
	end = size - 1;
	while(start < end)
	{
		int temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}
// second method to write this fucntion
/*
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	i = 0;
	while(i < size/2)
	{
		int temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
		
	}
}
*/
