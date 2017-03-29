char*	ft_strnew(size_t size)
{
	char*	str;
	int		i;

	str = (char*)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
