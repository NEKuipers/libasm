/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 12:02:15 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/14 09:33:10 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <string.h>

int			main(void)
{
	printf("***Test 1: ft_strcmp***\n");
	printf("ft_strcmp 'aab' : 'aaa' = %i\n", ft_strcmp("aab", "aaa"));
	printf("ft_strcmp 'aaa' : 'aab' = %i\n", ft_strcmp("aaa", "aab"))
	printf("ft_strcmp 'aaa' : 'aaaa' = %i\n", ft_strcmp("aaa", "aaaa"));
	printf("ft_strcmp 'aaa' : '' = %i\n", ft_strcmp("aaa", ""));
	printf("ft_strcmp 'aaa' : 'aaa' = %i\n", ft_strcmp("aaa", "aaa"));
	printf("***Test 2: ft_strlen***\n");
	printf("ft_strlen '' = %i | strlen '' = %i\n", ft_strlen(""), strlen(""));
	printf("ft_strlen 'Test' = %i | strlen 'Test' = %i\n", ft_strlen("Test"), strlen("Test"));
	printf("ft_strlen 'Testing testing  ' = %i | strlen 'Testing testing  ' = %i\n", ft_strlen("Testing testing  "), strlen("Testing testing  "));
	printf("ft_strlen 'abcdefghijklmnopqrstuvwxyz' = %i | strlen 'abcdefghijklmnopqrstuvwxyz' = %i\n", ft_strlen("abcdefghijklmnopqrstuvwxyz"), strlen("abcdefghijklmnopqrstuvwxyz"));
	printf("***Test 3: ft_write***\n");
	ft_write(1,"All good!", 9);
	printf("***Test 4: ft_strcpy***\n");
	char c[5] = "test";
	char *d = "good";
	printf("%s\n", c);
	printf("%s\n", ft_strcpy(c, d));
	printf("%s\n", c);
	printf("***Test 5: ft_strdup***\n");
	char *test = ft_strdup("Testing");
	printf("%s\n", test);
	free(test);
	printf("***Test 6: ft_read***\n");
	char a[32];
	int ret = ft_read(0, a, 2);
	a[ret] = 0;
	printf("%s\n", a);
	return (0);
}
