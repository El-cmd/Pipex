/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:51:50 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/01 02:52:40 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

char	*ft_strjoin(char *s1, const char *s2)
{
	char	*join;
	size_t	i;
	size_t	n;

	n = 0;
	i = 0;
	if (!s1 || !s2)
		return (0);
	join = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!join)
		return (0);
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[n])
	{
		join[i] = s2[n];
		i++;
		n++;
	}
	join[i] = 0;
	free(s1);
	return (join);
}
