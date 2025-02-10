/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:22:10 by dsedlets          #+#    #+#             */
/*   Updated: 2024/03/03 18:48:56 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
 * Применяет функцию f к каждому элементу списка lst и создает новый список
 * с результатами применения этой функции к каждому элементу исходного списка.
 * 
 * new_node = ft_lstnew(f(lst->content)) - Создаем новый узел списка, применяя
 *  функцию f к содержимому текущего узла lst и передавая результат в 
 *  функцию ft_lstnew, чтобы создать новый узел.
 *
 * if (new_node == NULL) - Проверяем, удалось ли создать новый узел. Если не
 *  удалось (если new_node равен NULL), значит произошла ошибка при 
 *  выделении памяти для нового узла.
 *
 * ft_lstadd_back(&new_list, new_node); - Добавляем новый узел в конец
 * списка new_list с помощью функции ft_lstadd_back.
 *
 * lst = lst->next; - Переходим к следующему узлу исходного списка lst.
 */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			break ;
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
