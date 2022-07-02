#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include "libs/ft_printf/ft_printf.h"
# include "libs/libft/libft.h"

typedef struct s_cmd{
	char *cmd_path;
	char **cmd;
}t_cmd;

typedef struct s_pipe{
	int fd[2];
	char *in;
	char *out;
	t_cmd *cmd1;
	t_cmd *cmd2;
}t_pipe;


int main(int argc, char *argv[], char *envp[]);

void *validate_argv(char **argv, int argc);

void find_valid_path(char **envp, t_pipe *pipe);

void error(char *msg, t_pipe *pipe);





#endif