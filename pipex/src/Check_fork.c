#include "../headers/pipex.h"



int main(int argc, char *argv[], char *envp[])
{
    (void)argc;
    (void)argv;
    (void)envp;
    ft_printf("%d\n", access("/usr/local/bin/", F_OK));
    
    return 0;
}