int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[2])
			return (0);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] == '\0') || i == n)
		return (1);
	else
		return (0);
