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

size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, const void *buf, size_t count);

int		main(void)
{
	char 	*s1 = "abc";
	char 	*s2 = "";
	char 	*s3 = NULL;

/*
//*************  FT_STRLEN ***********************************
	printf("ft_strlen(\"abc\")->%zu\n", ft_strlen(s1));
//	printf("ft_strlen(NULL)->%zu\n", ft_strlen(s3));
	printf("ft_strlen('\\0')->%zu\n", ft_strlen(s2));
	printf("\n");

	printf("-->strlen(\"abc\")->%zu\n", strlen(s1));
//	printf("-->strlen(NULL)->%zu\n", strlen(s3));
	printf("-->strlen('\\0')->%zu\n", strlen(s2));
//************** FT_STRCPY **************************

	char	dest1[4] = {0};
	char	*src1 = "abc";
	char	*ret = NULL;
	printf("\n\n\n");
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

//**************** FT_STRCMP *********************************

	char	*cmp1 = NULL;
	char	*cmp2 = "";

	printf("cmp1->%s, cmp2->%s, ret->%d\n", cmp1, cmp2, strcmp(cmp1, cmp2));
	printf("cmp1->%s, cmp2->%s, ret->%d\n", cmp1, cmp2, ft_strcmp(cmp1, cmp2));

//**************** FT_WRITE **************************


*/
	char c = 'c';
	ft_write(1, &c, 1);

	return (0);
}
