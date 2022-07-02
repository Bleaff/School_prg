#include "../headers/pipex.h"



int main(int argc, char *argv[], char *envp[])
{
    (void)argc;
    (void)argv;
    int i = 0;
    int j = 0;
    int z = 0;
    char *path;
    while(envp[i])
    {
        if (ft_strncmp(envp[i], "PATH", ft_strlen("PATH")) == 0)
        {
            while(envp[i][j] != '=' && envp[i][j])
                j++;
            z = ++j;
            while(envp[i][z] != ':' && envp[i][z])
                z++;
            path = ft_substr(envp[i], j, z - j);
            path = ft_strjoin(path, "/");
            ft_printf("Path is %d!::%s\n",access(path, F_OK),path);

            
        }
        i++;
    }
    return 0;
}