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
	printf("ft_strcmp 'aab' : 'aaa' = %i | strcmp 'aab' : 'aaa' = %i\n", ft_strcmp("aab", "aaa"), strcmp("aab", "aaa"));
	printf("ft_strcmp 'aaa' : 'aab' = %i | strcmp 'aaa' : 'aab' = %i\n", ft_strcmp("aaa", "aab"), strcmp("aaa", "aab"));
	printf("ft_strcmp 'aaa' : 'aaaa' = %i | strcmp 'aaa' : 'aaaa' = %i\n", ft_strcmp("aaa", "aaaa"), strcmp("aaa", "aaaa"));
	printf("ft_strcmp 'aaa' : '' = %i | strcmp 'aaa' : '' = %i\n", ft_strcmp("aaa", ""), strcmp("aaa", ""));
	printf("ft_strcmp 'aaa' : 'aaa' = %i | strcmp 'aaa' : 'aaa' = %i\n", ft_strcmp("aaa", "aaa"), strcmp("aaa", "aaa"));
	printf("***Test 2: ft_strlen***\n");
	printf("ft_strlen '' = %i | strlen '' = %i\n", ft_strlen(""), strlen(""));
	printf("ft_strlen 'Test' = %i | strlen 'Test' = %i\n", ft_strlen("Test"), strlen("Test"));
	printf("ft_strlen 'Testing testing  ' = %i\n", ft_strlen("Testing testing  "));
	printf("ft_strlen 'abcdefghijklmnopqrstuvwxyz' = %i\n", ft_strlen("abcdefghijklmnopqrstuvwxyz"));

	return (0);
}
