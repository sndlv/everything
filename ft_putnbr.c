void	ft_putnbr(int nb)
{
	int i;
	unsigned int nbr;

	i = 0;
	nbr = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	nbr = nb;
	while (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	while (nbr < 10)
	{
		ft_putchar(nbr + '0');
	}

	
}
