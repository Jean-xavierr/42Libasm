/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:15:56 by jereligi          #+#    #+#             */
/*   Updated: 2020/02/19 15:48:46 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

int		ft_write(int, char *, size_t);
int		ft_read(int, char *, size_t);
int		ft_strlen(char *);
char	*ft_strcpy(char *, char *);
int		ft_strcmp(char *, char *);
char	*ft_strdup(char s);

int			main(void)
{
	printf("============================================\n");
	printf("================ Ft_write ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_write(1, "Hello World !", 13));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", write(1, "Hello World !", 13));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_write(1, "libasm", 6));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", write(1, "libasm", 6));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_write(1, "", 1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", write(1, "", 1));

	int	fd;	
	char	buf[5000];

	fd = open("ft_write.s", O_RDONLY);
	printf("============================================\n");
	printf("================= Ft_read ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_read(0, buf, 42));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", read(0, buf, 42));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_read(fd, buf, 2000));
	close(fd);
	fd = open("ft_write.s", O_RDONLY);
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", read(fd, buf, 2000));
	close(fd);

	printf("============================================\n");
	printf("================ Ft_strlen =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_strlen("Hello word"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("Hello word"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_strlen("a"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("a"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_strlen("test"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("test"));


	printf("============================================\n");
	printf("================ Ft_strcmp =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_strcmp("Hello", "Hello"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%d|\n\n", strcmp("Hello", "Hello"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_strcmp("abcd", "abce"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%d|\n\n", strcmp("abcd", "abce"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%d|\n", ft_strcmp("testzpxl", "testypol"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%d|\n\n", strcmp("testzpxl", "testypol"));


	char	str1[] = "Bonjour";
	char	str2[] = "Hello";
	char	str3[] = "libc most power full";
	char	str4[] = "libasm is for the ";
	char	str5[] = "petit";
	char	str6[] = "grand";
	printf("============================================\n");
	printf("================ Ft_strcpy =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%s|\n", ft_strcpy(str1, str2));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%s|\n\n", strcpy(str1, str2));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%s|\n", ft_strcpy(str3, str4));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%s|\n\n", strcpy(str3, str4));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%s|\n", ft_strcpy(str5, str6));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%s|\n\n", strcpy(str5, str6));
}	
