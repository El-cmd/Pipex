/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:48:29 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/01 03:12:22 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	free_tab2(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	str = NULL;
}

void	ft_exec(char **envp, char **av, int x)
{
	int		i;
	char	**path;
	char	*cmd;
	char	**cmdarg;

	i = -1;
	path = ft_parsing(envp);
	cmdarg = ft_split(av[x], ' ');
	while (path[++i])
	{
		cmd = ft_strjoin(ft_strjoin(path[i], "/"), cmdarg[0]);
		execve(cmd, cmdarg, envp);
		free(cmd);
	}
	free(path);
	ft_putstr_fd("pipex: ", STDERR);
	ft_putstr_fd(cmdarg[0], STDERR);
	free_tab2(cmdarg);
	ft_putstr_fd(" command not found\n", STDERR);
	exit(127);
}
