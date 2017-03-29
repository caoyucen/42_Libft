
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t-list  *ret;
	t_list	*new_head;

	temp = NULL;
	new_head = NULL;
	if (!lst || !f)
		return (NULL);
	ret = f(lst);
	new_head = ret;
	while (lst->next)
	{
		temp = f(lst->next);
		ret->next = temp;
		ret = ret->next;
		lst = lst->next;
	}
	return (new_head);
}
