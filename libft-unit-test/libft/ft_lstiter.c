#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst)
		return ;
	while (lst->next)
		ft_lstiter(lst->next, f);
	if (lst->next)
		f(lst);
}
