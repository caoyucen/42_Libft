#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	char	*t;

	i = 0;
	if (!*little)
		return ((char*)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			t = (char*)big + i;
			j = 0;
			while (big[i + j] == little[j] && (i + j) < len)
			{
				if (little[j + 1] == '\0')
					return (t);
				j++;
			}
			t = NULL;
		}
		i++;
	}
	return (NULL);
}


int main()
{
    char *b = "MZIRIBMZIRIBMZE123";
    char *l = "MZIRIBMZE";
    char *t;
    t = ft_strnstr(b, l, 9);
    printf("%s\n", t);

    return 0;
}


