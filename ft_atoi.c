int	ft_atoi(char *str)
{
	int i;
	int nbr;
	int negatif;

	i = 0;
	negatif = 0;
	nbr = 0;
	if (str[i] == '-')
	{
		negatif++;
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + str[i] - '0';
		i++;
	}
	if (negatif == 1)
		nbr = -nbr;
	return (nbr);
}
