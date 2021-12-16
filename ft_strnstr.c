/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:56:13 by mel-hada          #+#    #+#             */
/*   Updated: 2021/12/06 14:56:16 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] && j + i < len
			&& str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (&((char *)str)[i]);
		i++;
	}
	return (NULL);
}
