/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:37:32 by mel-hada          #+#    #+#             */
/*   Updated: 2021/12/06 14:37:35 by mel-hada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		s1_len;
	char	*str_copy;
	int		i;

	s1_len = ft_strlen(s1);
	str_copy = malloc(sizeof(*str_copy) * (s1_len + 1));
	if (str_copy)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			str_copy[i] = s1[i];
			i++;
		}
		str_copy[i] = '\0';
	}
	return (str_copy);
}
