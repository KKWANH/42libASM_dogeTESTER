/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:23:12 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/05/18 15:41:30 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		LIBASM_H
# define	LIBASM_H

# define	ANSI_RES	"\x1b[0m"
# define	ANSI_BOL	"\x1b[1m"
# define	ANSI_ITA	"\x1b[3m"
# define	ANSI_RED	"\x1b[31m"
# define	ANSI_GRE	"\x1b[32m"
# define	ANSI_YEL	"\x1b[33m"
# define	ANSI_BLU	"\x1b[34m"
# define	ANSI_MAG	"\x1b[35m"
# define	ANSI_CYA	"\x1b[36m"


# include	<stdio.h>
# include	<string.h>
# include	<unistd.h>
# include	<stdlib.h>
# include	<fcntl.h>

int			ft_strlen(char *str);
int			ft_strcmp(char *st1, char *st2);
char		*ft_strcpy(char *dst, char *src);
char		*ft_strdup(char *str);
ssize_t 	ft_read(int fil, void *buf, size_t siz);
ssize_t		ft_write(int fil, void *buf, size_t siz);

#endif
