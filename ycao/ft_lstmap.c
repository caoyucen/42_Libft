
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*new_head;

	temp = NULL;
	new_head = NULL;
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		temp = f(lst);
		//temp->next = f(lst->next);
		if (new_head == NULL)
			new_head = temp;
		lst = lst->next;
		temp = temp->next;
	}
	temp = f(lst);
	return (new_head);
}
