int	strllen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}


char	*ft_strcapitalize(char *str)
{
	int	i;
	int length;

	i = 0;
	length = strllen(str);
	while (i < length)
	{
		if (i == 0)
		{
			str[i] = str[i] - 32;
		}
		else if ((str[i - 1] == ' '
			||str[i - 1] == '-' 
			||str[i - 1] == '+')
			&& (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
		
		i++;
	}
	return (str);
}


// Another Code :D

/*
char       *ft_strlowcase(char *str)
{
   	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		str++;
	}
	return (str);
}


char	  *ft_strcapitalize(char *str)
{
	int	i;

	i = 0;

	ft_strlowcase(str);
	while ( str[i] != '\0')
	{
		if ((i == 0 || str[i - 1] == ' '
		   ||str[i - 1] == '+'
	   	   ||str[i - 1] == '-')
	     	   && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}	
*/
