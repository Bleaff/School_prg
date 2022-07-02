#include "../headers/pipex.h"



int main(int argc, char *argv[], char *envp[])
{
    (void)argc;
    (void)argv;
    // int i = 0;
    // int j = 0;
    // int z = 0;
    // char *path;
    // ft_printf("%s\n", argv[0]);
    // while(envp[i])
    // {
    //     if (ft_strncmp(envp[i], "PATH", ft_strlen("PATH")) == 0)
    //     {
    //         while(envp[i][j] != '=' && envp[i][j])
    //             j++;
    //         z = ++j;
    //         while(envp[i][z] != ':' && envp[i][z])
    //             z++;
    //         path = ft_substr(envp[i], j, z - j);
    //         path = ft_strjoin(path, "/");
    //         ft_printf("Path is %d!::/usr/bin/ls\n",access("/usr/bin/ls", F_OK));
    //         //Let's try to exec ls cmd
    //         // char *cmd = ft_strjoin(path, "ls");
    //         char *command[] = {"ls", ".", NULL};
    //         ft_printf("%d\n", execve("/usr/bin/ls", command, envp));
            
    //     }
    //     i++;
    // }
    find_valid_path(envp, NULL);
    return 0;
}