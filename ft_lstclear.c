#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{	
	t_list	*temp;
	t_list	*elem;

	if (!(*lst))
		return ;
	elem = *lst;
	while (elem)
	{
		temp = elem->next;
		ft_lstdelone(elem, del);
		elem = temp;
	}
	*lst = NULL;
}