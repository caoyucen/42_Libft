
#include "libft.h"

size_t	ft_strlcat(char* dst, const char* src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	sum;
	size_t	i;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	sum = len_dst + len_src;

	if (size - 1 > len_dst)
	{
		while (i < size -len_dst - 1)
		{
			dst[len_dst - 1 + i] = src[i];
			i++;
		}
		dst[len_dst - 1 + i] = '\0';
	}
	if (size - 1 = len_dst)
		return (len_dst);
	


