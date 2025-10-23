int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
#include <stdio.h>

int	is_start_uppercase(char *str)
{
	if (str[0] >= 'A' && str[0] <= 'Z')
		return (1);
	return (0);
}

int	main(void)
{
	char	*tab[] = {"Salut", "je", "Suis", "a", "lecole", "a", "A42", NULL};
	int	result = (ft_count_if(tab, &is_start_uppercase));
	printf("res : %d\n", result);
}
*/
