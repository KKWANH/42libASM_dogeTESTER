/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kimkwanho <kimkwanho@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:25:48 by kimkwanho         #+#    #+#             */
/*   Updated: 2021/05/18 18:02:57 by kimkwanho        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"libasm.h"

void			ft_prompt_hello(void)
{
	int			fil;
	char		buf;

	fil = open("srcs/prompt_ascii.txt", O_RDONLY);
	while (read(fil, &buf, 1) > 0)
		write(1, &buf, 1);
	close(fil);
}

void			ft_check_clear_buffer(char *buff, int size)
{
	int			indx = 0;

	while (indx < size)
		buff[indx++] = 0;
}

void			ft_check_strlen(void)
{
	char		*tst1 = "";
	char		*tst2 = "Hello world !";
	char		*tst3 = "Lorem ipsum dolor sit amet, consectetur adipiscing\
elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\
bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\
volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\
felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\
ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\
tortor, sit amet consequat amet.";
	char		*tst4 = "					 adkm    	 	 	 	 	 \
					 	\
\
\
\
\asdasdasda ";

	printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL ANSI_MAG "   1. ft_strlen.s\n" ANSI_RES);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " 0\n", "expected length");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc", strlen(tst1));
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm", ft_strlen(tst1));
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst2);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " 0\n", "expected length");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc", strlen(tst2));
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm", ft_strlen(tst2));
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst3);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " 0\n", "expected length");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc", strlen(tst3));
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm", ft_strlen(tst3));
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst4);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " 0\n", "expected length");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc", strlen(tst4));
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm", ft_strlen(tst4));
	printf("-----------------------------------------------------------------------------------------\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

void			ft_check_strcpy(void)
{
	char		buff[500];
	char		*tst1 = "";
	char		*tst2 = "Hello world !";
	char		*tst3 = "Lorem ipsum dolor sit amet, consectetur adipiscing\
elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\
bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\
volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\
felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\
ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\
tortor, sit amet consequat amet.";
	char		*tst4 = "					 adkm    	 	 	 	 	 \
					 	\
\
\
\
\asdasdasda ";

	printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL ANSI_MAG "   2. ft_strcpy.s\n\n" ANSI_RES);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " buff[100]\n", "copy to");
	strcpy(buff, tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "libc", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc length", strlen(buff));
	ft_check_clear_buffer(buff, 500);
	ft_strcpy(buff, tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "libasm", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm length", strlen(buff));
	ft_check_clear_buffer(buff, 500);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst2);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " buff[100]\n", "copy to");
	strcpy(buff, tst2);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "libc", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc length", strlen(buff));
	ft_check_clear_buffer(buff, 500);
	ft_strcpy(buff, tst2);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "libasm", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm length", strlen(buff));
	ft_check_clear_buffer(buff, 500);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst3);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " buff[100]\n", "copy to");
	strcpy(buff, tst3);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "libc", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc length", strlen(buff));
	ft_check_clear_buffer(buff, 500);
	ft_strcpy(buff, tst3);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "libasm", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm length", strlen(buff));
	ft_check_clear_buffer(buff, 500);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst4);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " buff[100]\n", "copy to");
	strcpy(buff, tst4);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "libc", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc length", strlen(buff));
	ft_check_clear_buffer(buff, 500);
	ft_strcpy(buff, tst4);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "libasm", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm length", strlen(buff));
	ft_check_clear_buffer(buff, 500);
	printf("-----------------------------------------------------------------------------------------\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

void			ft_check_strdup(void)
{
	char		*tst1 = "";
	char		*tst2 = "Hello world !";
	char		*tst3 = "Lorem ipsum dolor sit amet, consectetur adipiscing\
elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\
bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\
volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\
felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\
ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\
tortor, sit amet consequat amet.";
	char		*tst4 = "					 adkm    	 	 	 	 	 \
					 	\
\
\
\
\asdasdasda ";
	char		*save;
	printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL ANSI_MAG "   3. ft_strdup.s\n\n" ANSI_RES);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst1);
	save = strdup(tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %s\n", "libc", save);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc length", strlen(save));
	free(save);
	save = 0;
	save = ft_strdup(tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %s\n", "libasm", save);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm length", strlen(save));
	free(save);
	save = 0;
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst2);
	save = strdup(tst2);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %s\n", "libc", save);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc length", strlen(save));
	free(save);
	save = 0;
	save = ft_strdup(tst2);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %s\n", "libasm", save);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm length", strlen(save));
	free(save);
	save = 0;
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst3);
	save = strdup(tst3);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %s\n", "libc", save);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc length", strlen(save));
	free(save);
	save = 0;
	save = ft_strdup(tst3);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %s\n", "libasm", save);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm length", strlen(save));
	free(save);
	save = 0;
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst4);
	save = strdup(tst4);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %s\n", "libc", save);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc length", strlen(save));
	free(save);
	save = 0;
	save = ft_strdup(tst4);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %s\n", "libasm", save);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm length", strlen(save));
	free(save);
	save = 0;
	printf("-----------------------------------------------------------------------------------------\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

void			ft_check_strcmp(void)
{
	char		*empt = "";
	char		*tst1 = "Hello world !";
	char		*tst2 = "Lorem ipsum dolor sit amet, consectetur adipiscing\
elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\
bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\
volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\
felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\
ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\
tortor, sit amet consequat amet.";

	printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL ANSI_MAG "   4. ft_strcmp.s\n\n" ANSI_RES);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 0:", empt);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 1:", empt);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc", strcmp(empt, empt));
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm", ft_strcmp(empt, empt));
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 0:", tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 1:", empt);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc", strcmp(tst1, empt));
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm", ft_strcmp(tst1, empt));
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 0:", empt);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 1:", tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc", strcmp(empt, tst1));
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm", ft_strcmp(empt, tst1));
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 0:", tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 1:", tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc", strcmp(tst1, tst1));
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm", ft_strcmp(tst1, tst1));
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 0:", tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 1:", tst2);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc", strcmp(tst1, tst2));
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm", ft_strcmp(tst1, tst2));
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 0:", tst2);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "arg 1:", tst1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc", strcmp(tst2, tst1));
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libasm", ft_strcmp(tst2, tst1));
	printf("-----------------------------------------------------------------------------------------\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

void			ft_check_write(void)
{
	char		*tst1 = "";
	char		*tst2 = "Hello world !";
	char		*tst3 = "Lorem ipsum dolor sit amet, consectetur adipiscing\
elit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquam\
bibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Cras\
volutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisi\
felis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellus\
ac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posuere\
tortor, sit amet consequat amet.";
	char		*tst4 = "					 adkm    	 	 	 	 	 \
					 	\
\
\
\
\asdasdasda ";
	int			rest;

	printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL ANSI_MAG "   5. ft_write.s\n\n" ANSI_RES);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst1);
	printf(ANSI_BOL "      %-20s" ANSI_RES "\n", "libc write");
	rest = write(1, tst1, strlen(tst1));
	printf("\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %zu\n", "libc", rest);
	printf(ANSI_BOL "      %-20s" ANSI_RES "\n", "libasm write");
	rest = ft_write(1, tst1, strlen(tst1));
	printf("\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %zu\n", "libasm", rest);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst2);
	printf(ANSI_BOL "      %-20s" ANSI_RES "\n", "libc write");
	rest = write(1, tst2, strlen(tst2));
	printf("\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %zu\n", "libc", rest);
	printf(ANSI_BOL "      %-20s" ANSI_RES "\n", "libasm write");
	rest = ft_write(1, tst2, strlen(tst2));
	printf("\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %zu\n", "libasm", rest);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst3);
	printf(ANSI_BOL "      %-20s" ANSI_RES "\n", "libc write");
	rest = write(1, tst3, strlen(tst3));
	printf("\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %zu\n", "libc", rest);
	printf(ANSI_BOL "      %-20s" ANSI_RES "\n", "libasm write");
	rest = ft_write(1, tst3, strlen(tst3));
	printf("\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %zu\n", "libasm", rest);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst4);
	printf(ANSI_BOL "      %-20s" ANSI_RES "\n", "libc write");
	rest = write(1, tst4, strlen(tst4));
	printf("\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %zu\n", "libc", rest);
	printf(ANSI_BOL "      %-20s" ANSI_RES "\n", "libasm write");
	rest = ft_write(1, tst4, strlen(tst4));
	printf("\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %zu\n", "libasm", rest);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " \"%s\"\n", "char *", tst2);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "file descriptor", -1);
	printf(ANSI_BOL "      %-20s" ANSI_RES "\n", "libc write");
	rest = write(-1, tst2, strlen(tst2));
	printf("\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %zu\n", "libc", rest);
	printf(ANSI_BOL "      %-20s" ANSI_RES "\n", "libasm write");
	rest = ft_write(-1, tst2, strlen(tst2));
	printf("\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %zu\n", "libasm", rest);
	printf("-----------------------------------------------------------------------------------------\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

void			ft_check_read(void)
{
	int			file;
	char		buff[5000];
	int			rest = 1;

	printf("\n\n■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL ANSI_MAG "   5. ft_write.s\n\n" ANSI_RES);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES "%s\n", "file name", "srcs/tester.c");
	printf(ANSI_BOL "      %-20s:" ANSI_RES "%d\n", "read size", 890);
	file = open("srcs/tester.c", O_RDONLY);
	rest = read(file, buff, 890);
	buff[rest] = 0;
	printf(ANSI_BOL "      %-20s:" ANSI_RES "\n%s\n", "libc header", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc return", rest);
	close(file);
	ft_check_clear_buffer(buff, 891);
	file = open("srcs/tester.c", O_RDONLY);
	rest = ft_read(file, buff, 890);
	buff[rest] = 0;
	printf(ANSI_BOL "      %-20s:" ANSI_RES "\n%s\n", "libc header", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc return", rest);
	close(file);
	ft_check_clear_buffer(buff, 891);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES "%s\n", "file name", "nonexist");
	printf(ANSI_BOL "      %-20s:" ANSI_RES "%d\n", "read size", 890);
	file = open("nonexist", O_RDONLY);
	rest = read(file, buff, 890);
	buff[rest] = 0;
	printf(ANSI_BOL "      %-20s:" ANSI_RES "\n%s\n", "libc header", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc return", rest);
	close(file);
	ft_check_clear_buffer(buff, 891);
	file = open("nonexist", O_RDONLY);
	rest = ft_read(file, buff, 890);
	buff[rest] = 0;
	printf(ANSI_BOL "      %-20s:" ANSI_RES "\n%s\n", "libc header", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc return", rest);
	close(file);
	ft_check_clear_buffer(buff, 891);
	printf("-----------------------------------------------------------------------------------------\n");
	printf(ANSI_BOL "      %-20s:" ANSI_RES "%d\n", "file descriptor", -1);
	printf(ANSI_BOL "      %-20s:" ANSI_RES "%d\n", "read size", 10);
	rest = read(-1, buff, 10);
	buff[rest] = 0;
	printf(ANSI_BOL "      %-20s:" ANSI_RES "\n%s\n", "libc header", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc return", rest);
	ft_check_clear_buffer(buff, 891);
	rest = ft_read(-1, buff, 10);
	buff[rest] = 0;
	printf(ANSI_BOL "      %-20s:" ANSI_RES "\n%s\n", "libc header", buff);
	printf(ANSI_BOL "      %-20s:" ANSI_RES " %d\n", "libc return", rest);
	ft_check_clear_buffer(buff, 891);
	printf("-----------------------------------------------------------------------------------------\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
}

int				main(void)
{
	ft_prompt_hello();
	printf(ANSI_BOL "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");
	printf("                         WELCOME to " ANSI_CYA ANSI_ITA "kkim" ANSI_RES ANSI_BOL "'s " ANSI_YEL "dogeASM" ANSI_RES ANSI_BOL" SMALL TESTER\n");
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n" ANSI_RES);
	printf(ANSI_MAG ANSI_ITA ANSI_BOL "         : WARNING : " ANSI_RED "this tester doesn't evaluate bonus functions!" ANSI_MAG " : WARNING :\n");
	printf(ANSI_MAG ANSI_ITA ANSI_BOL "         : WARNING : " ANSI_RED "this tester doesn't evaluate bonus functions!" ANSI_MAG " : WARNING :\n");
	printf(ANSI_MAG ANSI_ITA ANSI_BOL "         : WARNING : " ANSI_RED "this tester doesn't evaluate bonus functions!" ANSI_MAG " : WARNING :\n" ANSI_RES);
	printf(ANSI_BOL "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n" ANSI_RES);
	sleep(1);
	ft_check_strlen();
	sleep(1);
	ft_check_strcpy();
	sleep(1);
	ft_check_strdup();
	sleep(1);
	ft_check_strcmp();
	sleep(1);
	ft_check_write();
	sleep(1);
	ft_check_read();
}