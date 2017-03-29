char*	ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char*		str;

	if (!s || !f)
		return (NULL);
	i = 0;
	str = (char*)malloc(sizeof(char) * ft_strlen(s));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
