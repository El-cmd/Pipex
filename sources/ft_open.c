/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 10:46:15 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/01 02:53:08 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

int	ft_open(char *av, int choice)
{
	if (choice == INFILE)
	{
		if (access(av, F_OK))
		{
			ft_putstr_fd("pipex: ", STDERR);
			ft_putstr_fd(av, STDERR);
			ft_putstr_fd(": No such file or directory\n", STDERR);
			return (STDIN);
		}
		return (open(av, O_RDONLY));
	}
	else
	{
		return (open(av, O_CREAT | O_RDWR | O_TRUNC, 0644));
	}
}
