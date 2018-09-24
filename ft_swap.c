int	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
