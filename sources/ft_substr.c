/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:17:31 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/01 02:49:10 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	*ft_ternaries(int condition, void *res1, void *res2)
{
	if (condition)
		return (res1);
	return (res2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	x;
	size_t			size;
	size_t			ssize;

	x = 0;
	ssize = ft_strlen(s);
	size = (size_t)ft_ternaries((start + len) > ssize,
			(void *)(ssize - start), (void *)len);
	if (start < ssize)
	{
		res = malloc(sizeof(char) * (size + 1));
		if (!res)
			return (0);
		while (x < size)
		{
			res[x] = s[start + x];
			x++;
		}
		res[x] = 0;
	}
	else
		return ("");
	return (res);
}
