/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivnovomi <ivnovomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:28:27 by ivnovomi          #+#    #+#             */
/*   Updated: 2023/09/26 21:17:17 by ivnovomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

// Checks if the passed value is an alphabetic character.
int		ft_isalpha(int c);

// Checks if the passed value is a numeric character.
int		ft_isdigit(int c);

// Checks if the passed value is alphanumeric.
int		ft_isalnum(int c);

// Checks if the passed value is a 7-bit ASCII character.
int		ft_isascii(int c);

// Checks if the passed character is printable.
int		ft_isprint(int c);

// Calculates the length of the string pointed to by str.
int		ft_strlen(const char *str);

// Fills the first n bytes of the memory area pointed to by str.
void	*ft_memset(void *str, int c, size_t n);

// Erases the data in the n bytes of the memory.
void	ft_bzero(void *str, size_t n);

// Copies n bytes from memory area src to memory area dst.
void	*ft_memcpy(void *dst, const void *src, size_t n);

// Copies len bytes from string src to string dst.
void	*ft_memmove(void *dst, const void *src, size_t len);

// Copies the string pointed to by src to the buffer pointed to by dst.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

// Appends the string src to the end of dst.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

// Make's a lowercase character to a upcase character.
int		ft_toupper(int c);

// Make's a upcase character to a lowercase character.
int		ft_tolower(int c);

// The ft_strchr() function locates the first occurrence of c
//(converted to a char) in the string pointed to by s.
char	*ft_strchr(const char *s, int c);

// The ft_strrchr() function is identical to strchr(),
char	*ft_strrchr(const char *s, int c);

// The ft_strncmp() function compares not more than n characters.
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// The ft_memchr() function locates the first occurrence of c
void	*ft_memchr(const void *s, int c, size_t n);

// The ft_memcmp() function compares byte string s1 against byte string s2.
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// The ft_strnstr() function locates the first 
// occurrence of the null-terminated string little in the string big.
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// The ft_atoi() function converts the initial portion of 
// the string pointed to by str.
int		ft_atoi(const char *str);

#endif