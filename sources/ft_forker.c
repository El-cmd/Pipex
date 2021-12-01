/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:40:25 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/01 02:50:40 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pipex.h"

void	ft_forker(char **av, char **envp, int in)
{
	int		pipefd[2];
	pid_t	id;

	pipe(pipefd);
	id = fork();
	if (id == 0)
	{
		close(pipefd[0]);
		dup2(pipefd[1], STDOUT);
		if (in == STDIN)
			exit(1);
		else
			ft_exec(envp, av, 2);
	}
	else
	{
		close(pipefd[1]);
		dup2(pipefd[0], STDIN);
		waitpid(id, NULL, 0);
		close(pipefd[0]);
	}
}
