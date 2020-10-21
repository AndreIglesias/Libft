/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciglesia <ciglesia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 17:41:34 by ciglesia          #+#    #+#             */
/*   Updated: 2020/10/21 16:44:32 by ciglesia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


intmax_t			ft_abs(intmax_t x);
int					ft_atoi(const char *str);
int					ft_countchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
int					ft_putnbr_max(uintmax_t nb, int fd);
int					ft_putchar_fd(char c, const int fd);
int					ft_strlen(char *str);
#endif
