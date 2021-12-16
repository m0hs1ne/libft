/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:56:46 by mel-hada          #+#    #+#             */
/*   Updated: 2021/12/06 14:59:13 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*res;

	res = NULL;
	while (*str)
	{
		if (*str == (char)c)
			res = (char *)str;
		str++;
	}
	if (!(char)c)
		return ((char *)str);
	return (res);
}
