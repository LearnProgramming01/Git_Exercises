char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while ((to_find[j] == str[j + j]) && to_find[j])
		
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

// Another way to write this function

/*

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}


char	*ft_strstr(char	*str, char *to_find)
{
	int	i;
	int	j;
	int	len;
	int	len1;

	len = ft_strlen(str);
	len1 = ft_strlen(to_find);
	i = 0;
	while ((str[i]) && ( i < len))
	{
		j = 0;
		while (j < len1)
		{
			if((to_find[j] != str[i + j]) && (to_find[j]))
				break;
			j++;
		}
		if (to_find == '\0')
			return (str + i);
		i++;
	}
	return (0);
} 
		
			
