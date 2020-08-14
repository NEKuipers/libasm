/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libasm.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 12:46:01 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/14 09:49:17 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *s);
ssize_t				ft_read(int fd, void *buf, size_t bytes);
ssize_t				ft_write(int fd, const void *buf, size_t bytes);

#endif
