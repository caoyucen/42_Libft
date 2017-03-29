int		ft_isspace(char s)
{
	if (s == ' ' || s == '\n' || s == '\t')
		return (1);
	else
		return (0);
}

char*	ft_strtrim(char const *s)
{
	unsigned int		i;
	char*	str;

	if (!s)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (NULL);
	ft_strcpy(str,  s);
	i = ft_strlen(str) - 1;
	while (i >= 0 && ft_isspace(str[i]))
	{
		str[i] == '\0';
		i--;
	}
	i = 0;
	while (i < ft_strlen(str) && ft_isspace(str[i]))
	{
		str++;
		i++;
	}
	return (str);
}
