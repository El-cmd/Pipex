/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:35:23 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/01 02:52:19 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

char	**ft_parsing(char **envp)
{
	int		i;
	char	**path;
	char	*tmp;

	i = find_path(envp);
	tmp = ft_substr(envp[i], 5, ft_strlen(envp[i]));
	path = ft_split(tmp, ':');
	free(tmp);
	return (path);
}
