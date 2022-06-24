#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*nlst;
	
	tmp = NULL;
	nlst = NULL;
	if (!lst || !(*f) || !(*del))
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&tmp, del);
			return(NULL);
		}
		else
			ft_lstadd_back(&nlst, tmp);
		lst = lst->next;
	}
	return (nlst);
}
