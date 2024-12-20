/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acaes <acaes@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:26:38 by acaes             #+#    #+#             */
/*   Updated: 2024/12/03 18:47:44 by acaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# define MAXINT 2147483647

# ifndef FD_MAX
#  define FD_MAX 256
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char		*ft_strchr(const char *s, int a);
char		*ft_strdup(const char *s);
char		*ft_substr(const char *s, unsigned int start, size_t l);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_free(char **ptr);
char		*fill_line(int fd, char *left);
char		*set_line(char *line);
char		*get_next_line(int fd);

#endif
