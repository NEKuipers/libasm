/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 12:02:15 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/07/23 14:10:25 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int			main(void)
{
	printf("***Test 1: ft_strcmp***\n")
	printf("ft_strcmp 'aab' : 'aaa' = %i\n", ft_strcmp("aab", "aaa"));
	printf("ft_strcmp 'aaa' : 'aab' = %i\n", ft_strcmp("aaa", "aab"));
	printf("ft_strcmp 'aaa' : 'aaaa' = %i\n", ft_strcmp("aaa", "aaaa"));
	printf("ft_strcmp 'aaa' : '' = %i\n", ft_strcmp("aaa", ""));
	printf("ft_strcmp 'aaa' : 'aaa' = %i\n", ft_strcmp("aaa", "aaa"));
	printf("***Test 2: ft_strlen***\n")


	return (0);
}
