/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 02:47:08 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/12 00:24:44 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

size_t	str_len(const char *s);
char	*my_strjoin(char *s1, char *s2);
char	*my_strchr(const char	*s, int c);
char	*my_strdup(const char *src);
int		find_nl(char *s);
char	*move_static(char *stat);
char	*find_under_str(char *stat_st);
char	*read_from_fd(int fd, char *static_str);
char	*get_next_line(int fd);
#endif
