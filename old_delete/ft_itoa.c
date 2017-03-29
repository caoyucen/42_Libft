char*	ft_itoa(int n)
{
	char*	str;
	int	neg;

	neg = 1;
	str = ft_strnew(12);
	if (n = -2147483648)
		ft_strcpy(str, "-2147483648");
	if(n < 0)
	{
		n = 0 - n;
		neg = -1;
	}

