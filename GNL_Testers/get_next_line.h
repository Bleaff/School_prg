/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 02:47:08 by bleaf             #+#    #+#             */
/*   Updated: 2022/01/03 21:04:25 by bleaf            ###   ########.fr       */
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
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char	*s, int c);
char	*ft_strdup(const char *src);
char	*glue_and_free(char *left, char *buf);
char	*get_next_line(int fd);
#endif
