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
	char *s1 = "aab";
	char *s2 = "aaa";
	printf("strcmp 'aab' - 'aaa' = %i\n", ft_strcmp(s1, s2));
	return (0);
}
