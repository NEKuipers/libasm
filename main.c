/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nkuipers <nkuipers@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/23 12:02:15 by nkuipers      #+#    #+#                 */
/*   Updated: 2020/08/15 10:43:13 by nkuipers      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void clear_buffer(char *buffer, int size)
{
	int i = 0;
	while (i < size)
		buffer[i++] = 0;
}

int			main(void)
{	

	char s1[] = "Hello World !";
	char s2[] = "Hello Nick !";
	char s3[] = "Hello World!";
	char s4[] = "";
	printf("\033[1;36m***Test 1: ft_strcmp***\n\033[0m");
	printf("%-20s: \"%s\"\n", "string1:", s1);
	printf("%-20s: \"%s\"\n", "string2:", s2);
	printf("%-20s: \"%d\"\n", "strcmp:", strcmp(s1, s2));
	printf("%-20s: \"%d\"\n", "ft_strcmp:", ft_strcmp(s1, s2));
	printf("\n");
	printf("%-20s: \"%s\"\n", "string1:", s1);
	printf("%-20s: \"%s\"\n", "string2:", s3);
	printf("%-20s: \"%d\"\n", "strcmp:", strcmp(s1, s3));
	printf("%-20s: \"%d\"\n", "ft_strcmp:", ft_strcmp(s1, s3));
	printf("\n");
	printf("%-20s: \"%s\"\n", "string1:", s3);
	printf("%-20s: \"%s\"\n", "string2:", s4);
	printf("%-20s: \"%d\"\n", "strcmp:", strcmp(s3, s4));
	printf("%-20s: \"%d\"\n", "ft_strcmp:", ft_strcmp(s3, s4));
	printf("\n");

	printf("\033[1;36m***Test 2: ft_strlen***\n\033[0m");
	printf("%-20s: \"%s\"\n", "string:", "");
	printf("%-20s: %zu\n", "strlen:", strlen(""));	
	printf("%-20s: %zu\n", "ft_strlen:", ft_strlen(""));
	printf("\n");
	printf("%-20s: \"%s\"\n", "string:", "Hello World !");
	printf("%-20s: %zu\n", "strlen:", strlen("Hello World !"));	
	printf("%-20s: %zu\n", "ft_strlen:", ft_strlen("Hello World !"));
	printf("\n");
	printf("%-20s: \"%s\"\n", "string:", "abcdefghijklmnopqrstuvwxyz");
	printf("%-20s: %zu\n", "strlen:", strlen("abcdefghijklmnopqrstuvwxyz"));	
	printf("%-20s: %zu\n", "ft_strlen:", ft_strlen("abcdefghijklmnopqrstuvwxyz"));
	printf("\n");

	printf("\033[1;36m***Test 3: ft_strcpy***\n\033[0m");
	char buffer[30];
	char *empty = "";
	char *hello_world = "Hello world !";
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	
	printf("%-20s: \"%s\"\n", "string:", empty);
	printf("%-20s: buffer[30]\n", "destination:");
	printf("%-20s: \"%s\"\n", "strcpy:", strcpy(buffer, empty));	
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "ft_strcpy:", ft_strcpy(buffer, empty));	
	clear_buffer(buffer, 30);
	printf("\n");
	printf("%-20s: \"%s\"\n", "string:", hello_world);
	printf("%-20s: buffer[30]\n", "destination:");
	printf("%-20s: \"%s\"\n", "strcpy:", strcpy(buffer, hello_world));	
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "ft_strcpy:", ft_strcpy(buffer, hello_world));	
	clear_buffer(buffer, 30);
	printf("\n");
	printf("%-20s: \"%s\"\n", "string:", alphabet);
	printf("%-20s: buffer[30]\n", "destination:");
	printf("%-20s: \"%s\"\n", "strcpy:", strcpy(buffer, alphabet));	
	clear_buffer(buffer, 30);
	printf("%-20s: \"%s\"\n", "ft_strcpy:", ft_strcpy(buffer, alphabet));
	clear_buffer(buffer, 30);
	printf("\n");

	printf("\033[1;36m***Test 4: ft_strdup***\n\033[0m");
	char *save;
	char *save2;
	printf("%-20s: \"%s\"\n", "string:", hello_world);
	save = strdup(hello_world);
	printf("%-20s: \"%s\"\n", "strdup:", save);
	free(save);
	save = NULL;
	save2 = ft_strdup(hello_world);
	printf("%-20s: \"%s\"\n", "ft_strdup:", save2);
	free(save2);
	save2 = NULL;
	printf("\n");

	printf("%-20s: \"%s\"\n", "string:", empty);
	save = strdup(empty);
	printf("%-20s: \"%s\"\n", "strdup:", save);
	free(save);
	save = NULL;
	save2 = ft_strdup(empty);
	printf("%-20s: \"%s\"\n", "ft_strdup:", save2);
	free(save2);
	save2 = NULL;
	printf("\n");


	printf("\033[1;36m***Test 5: ft_write***\n\033[0m");
	printf("%-20s: \"%s\"\n", "string to write:", hello_world);
	printf("%-20s: write: %zu\n", " <- written, return value is", write(1, hello_world, 13));
	printf("%-20s: ft_write: %zu\n", " <- written, return value is", ft_write(1, hello_world, 13));
	printf("\n");
	printf("%-20s: \"%s\"\n", "string to write:", empty);
	printf("%-20s: return value: %zu\n", "write", write(1, empty, 0));
	printf("%-20s: return value: %zu\n", "ft_write", ft_write(1, empty, 0));
	printf("\n");
	printf("%-20s: \"%s\"\n", "string to write:", "NULL");
	printf("%-20s: return value: %zu\n", "write", write(-7, NULL, 7));
	printf("%-20s: return value: %zu\n", "ft_write", ft_write(-7, NULL, 7));
	printf("\n");	


	printf("\033[1;36m***Test 6: ft_read***\n\033[0m");
	int fd = open("main.c", O_RDONLY);
	char buff1[891];
	int ret = 1;
	printf("%-20s: \n", "header main.c | read ");
	ret = read(fd, buff1, 890);
	buff1[ret] = 0;
	printf("[return value: %d]\n%s\n", ret, buff1);
	printf("\n");
	close(fd);
	fd = open("main.c", O_RDONLY);
	clear_buffer(buff1, 891);
	printf("%-20s: \n", "header main.c | ft_read ");
	ret = ft_read(fd, buff1, 890);
	buff1[ret] = 0;
	printf("[return value: %d]\n%s\n", ret, buff1);
	printf("\n");
	clear_buffer(buff1, 891);
	close(fd);

	fd = open("test", O_RDONLY);
	printf("%-20s: ", "non-existant file test | read ");
	ret = read(fd, buff1, 890);
	buff1[ret] = 0;
	printf("[return value: %d]%s\n", ret, buff1);
	printf("\n");
	close(fd);
	fd = open("test", O_RDONLY);
	clear_buffer(buff1, 891);
	printf("%-20s: ", "non-existant file test | ft_read ");
	ret = ft_read(fd, buff1, 890);
	buff1[ret] = 0;
	printf("[return value: %d]%s\n", ret, buff1);
	printf("\n");
	clear_buffer(buff1, 891);
	close(fd);

	return (0);	
}
