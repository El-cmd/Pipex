/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_path.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 09:52:43 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/01 02:49:51 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

int	find_path(char **path)
{
	int	n;

	n = 0;
	while (path[n] && ft_strncmp(path[n], "PATH=", 5))
		n++;
	return (n);
}
