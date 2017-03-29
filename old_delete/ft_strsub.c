char*	ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char*	str;

	i = 0;
	if (!s || (strat + len > ft_strlen(s)))
		return (NULL);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
