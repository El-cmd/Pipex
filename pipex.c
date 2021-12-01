/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:14:36 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/01 02:48:19 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/pipex.h"

int	main(int ac, char *av[], char *envp[])
{
	int	in;
	int	out;

	if (ac == 5)
	{
		in = ft_open(av[1], INFILE);
		out = ft_open(av[4], OUTFILE);
		dup2(in, STDIN);
		dup2(out, STDOUT);
		ft_forker(av, envp, in);
		ft_exec(envp, av, 3);
	}
	else
		ft_putstr_fd("Invalid number of arguments.\n", STDERR);
	return (1);
}
