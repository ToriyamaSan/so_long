/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: david <david@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:13:15 by dle-fur           #+#    #+#             */
/*   Updated: 2024/11/20 12:44:05 by david            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
	{
		return (0);
	}
	while ((char)c != *s)
	{
		if (!*s)
		{
			return (0);
		}
		s++;
	}
	return ((char *)s);
}
