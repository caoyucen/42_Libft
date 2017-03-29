
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*new_head;
	int		mark;

	mark = 0;
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		temp = f(lst);
		temp->next = f(lst->next);
		if (mark == 0)
		{
			new_head = temp;
			mark = 1;
		}
		lst = lst->next;
		temp = temp->next;
	}
	temp = f(lst);
	return (new_head);
}
