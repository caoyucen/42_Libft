void	ft_putendl_fd(char const *s, int fd)
{
	if (s  == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, '\n', 1);
}
