/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:51:36 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/07 23:54:29 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libs/ft_printf/ft_printf.h"
# include "libs/libft/libft.h"

typedef struct s_cmd{
	char	*cmd_path;
	char	**cmd;
}t_cmd;

typedef struct s_pipe{
	int		fd[2];
	int		fd_infile;
	int		fd_outfile;
	char	*in;
	char	*out;
	t_cmd	cmd1;
	t_cmd	cmd2;
}t_pipe;

int		main(int argc, char *argv[], char *envp[]);
int		validate_argv(char **argv, int argc);
void	find_valid_path(char **envp, t_pipe *pipe, t_cmd *cmd);
void	fill_cmd(t_pipe *pipe, char **argv, char **envp);
void	error(char *msg, t_pipe *pipe);
void	check_validation(t_pipe *pipe, int argc, char **argv, char **envp);
void	error_cmd(t_pipe *pipe, char *msg);
void	error_exit(char *msg);
void	error_exit(char *msg);
void	check_validation(t_pipe *pipe, int argc, char **argv, char **envp);
void	free_struct(t_pipe *pipe);
#endif