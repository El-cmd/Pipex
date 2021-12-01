/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlothlinux <vlothlinux@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 10:02:28 by vlothlinux        #+#    #+#             */
/*   Updated: 2021/12/01 02:48:47 by vlothlinux       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/wait.h>

# define INFILE 0
# define OUTFILE 1
# define STDIN 0
# define STDOUT 1
# define STDERR 2

int		find_path(char **path);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	**ft_split(char *str, char c);
char	**ft_parsing(char **envp);
char	*ft_strjoin(char *s1, const char *s2);
int		ft_open(char *av, int mode);
void	ft_exec(char **envp, char **av, int x);
void	ft_forker(char **av, char **envp, int in);
void	ft_putstr_fd(char *s, int fd);

#endif