void*	ft_memalloc(size_t size)
{
	void* a;

	a = malloc(size);
	if (!a)
		return (NULL);
	ft_bzero(a, (int)size);
	return (a);
}
