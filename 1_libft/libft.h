/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwebe-ir <fwebe-ir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:39:04 by fwebe-ir          #+#    #+#             */
/*   Updated: 2024/11/15 15:08:28 by fwebe-ir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	*ft_memset(void *buffer, int simbol, size_t size);
void	*ft_bzero(void *buffer, size_t size);
void	*ft_calloc(size_t amount, size_t type_size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *src, int c, size_t amount);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memmove(void *str_dest, const void *str_src, size_t size);
char	*ft_strchr(const char *src, int target);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *src1, char const *src2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *src, unsigned int start, size_t len);
char	ft_tolower(char str);
char	ft_toupper(char str);
void	*ft_memcpy(void *str_dest, const void *str_src, size_t n);
char	*ft_itoa(int src_n);
char	*ft_strndup(const char *src, size_t start, size_t end);

#endif