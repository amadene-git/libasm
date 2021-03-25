/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admadene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:32:58 by admadene          #+#    #+#             */
/*   Updated: 2021/03/24 12:07:47 by admadene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
int	ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	ft_read(int fd, void *buff, size_t count);
char	*ft_strdup(const char *str);


void	ft_putstr(char *str)
{
	int i = -1;
	while(str[++i]);
	ft_write(1, str, i);
}

int		main(void)
{
	char 	*s1 = "abc";
	char 	*s2 = "";
	char 	*s3 = NULL;

/*
//################  FT_STRLEN ########################################


	printf("################### FT_STRLEN ################\n");
	printf("ft_strlen(\"abc\")->%zu\n", ft_strlen(s1));
//	printf("ft_strlen(NULL)->%zu\n", ft_strlen(s3));
	printf("ft_strlen('\\0')->%zu\n", ft_strlen(s2));
	printf("\n");

	printf("-->strlen(\"abc\")->%zu\n", strlen(s1));
//	printf("-->strlen(NULL)->%zu\n", strlen(s3));
	printf("-->strlen('\\0')->%zu\n", strlen(s2));

//################ FT_STRCPY ################################



	char	dest1[4] = {0};
	char	*src1 = "abc";
	char	*ret = NULL;
	printf("\n\n####################### FT_STRCPY #################\n");
	printf("dest: [%20s], srcs: [%20s] -> ret: %s\n", dest1, src1, ret);
	ret = strcpy(dest1, src1);
	printf("dest: [%20s], srcs: [%20s] -> ret: %s\n", dest1, src1, ret);
	
	ret = NULL;
	for (int i = 0; i < 4; i++)
		dest1[i] = 0;
	printf("\n");
	printf("dest: [%20s], srcs: [%20s] -> ret: %s\n", dest1, src1, ret);
	ret = ft_strcpy(dest1, src1);
	printf("dest: [%20s], srcs: [%20s] -> ret: %s\n", dest1, src1, ret);

//################## FT_STRCMP ##############################


	printf("\n\n##################### FT_STRCMP #####################\n");

	printf("cmp1->%s, cmp2->%s, ret->%d\n", "abc", "abc", strcmp("abc", "abc"));
	printf("cmp1->%s, cmp2->%s, ret->%d\n\n", "abc", "abc", ft_strcmp("abc", "abc"));
	
	printf("cmp1->%s, cmp2->%s, ret->%d\n", "abc", "abd", strcmp("abc", "abd"));
	printf("cmp1->%s, cmp2->%s, ret->%d\n\n", "abc", "abd", ft_strcmp("abc", "abd"));
	
	printf("cmp1->%s, cmp2->%s, ret->%d\n", "abc", "abb", strcmp("abc", "abb"));
	printf("cmp1->%s, cmp2->%s, ret->%d\n\n", "abc", "abb", ft_strcmp("abc", "abb"));
	
	printf("cmp1->%s, cmp2->%s, ret->%d\n", "", "", strcmp("", ""));
	printf("cmp1->%s, cmp2->%s, ret->%d\n\n", "", "", ft_strcmp("", ""));
	
//################## FT_WRITE #################################

*/
	char c = 'c';
	printf("\n\n######################### FT_WRITE ######################\n");
	int i = 0;
//	i = write(1, "write\n", 6);
//	printf("ret   :%d\n", i);
	i = ft_write(1, NULL, 9);
	printf("ft ret:%d\n", i);
	
//	i = write(-1, NULL, 3);
//	printf("ret NULL   :%d\n", i);
//	printf("%s\n", strerror(errno));
	i = ft_write(-1, NULL, 3);
	printf("ft ret NULL:%d\n", i);
	printf("%s\n", strerror(errno));
/*
//############### FT_READ ############################################
	printf("\n\n########################### FT_READ #######################\n");
	ft_write(1, "read:", 5);
	while (c != '\n')
		read(0, &c, 1);

	ft_write(1, "ft_read:", 8);
	c = 0;
	while (c != '\n')
		ft_read(0, &c, 1);
	ft_write(1, "ft_read(-1, NULL, 0)\n", 22);
	ft_read(-1, NULL, 0);
	printf("errno:%d->%s\n", errno, strerror(errno));
	
	char *dup1 = "abc";
	char *dup2 = ft_strdup(dup1);
	printf("dup->%s\n", dup2);

*/
	return (0);
}
