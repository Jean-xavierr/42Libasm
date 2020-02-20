/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:15:56 by jereligi          #+#    #+#             */
/*   Updated: 2020/02/20 16:19:32 by jereligi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void		ft_check_write(void)
{
	printf("============================================\n");
	printf("================ Ft_write ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "Hello World !", 13));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "Hello World !", 13));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test", 271));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(-7, "libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test", 271));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("\nreturn : [%zd]\n", ft_write(1, "", 1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("\nreturn : [%zd]\n\n", write(1, "", 1));

}

void		ft_check_read(void)
{
	ssize_t		ret_read;
	int			fd;	
	char		buf[5000];

	fd = open("ft_write.s", O_RDONLY);
	printf("============================================\n");
	printf("================= Ft_read ==================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	ret_read = ft_read(0, buf, 42);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n", buf, ret_read);
	printf("\033[36mresultat : libc\033[00m\n");
	ret_read = read(0, buf, 42);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
	printf("\033[36mresultat : libasm\033[00m\n");
	ret_read = 0;
	ret_read = ft_read(-7, buf, 2000);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n", buf, ret_read);
	close(fd);
	fd = open("ft_write.s", O_RDONLY);
	printf("\033[36mresultat : libc\033[00m\n");
	ret_read = 0;
	ret_read = read(-7, buf, 2000);
	buf[ret_read] = '\0';
	printf("|%s|\nreturn : [%zd]\n\n", buf, ret_read);
	close(fd);
}

void		ft_check_strlen(void)
{
	printf("============================================\n");
	printf("================ Ft_strlen =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("Hello word"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("Hello word"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("a"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("a"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("|%zd|\n", ft_strlen("test"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("|%zd|\n\n", strlen("test"));
}

void		ft_check_strcmp(void)
{
	char	strcmp1[] = "";
	char	strcmp2[] = "Hello World !";
	printf("============================================\n");
	printf("================ Ft_strcmp =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp("Hello", "Hello"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp("Hello", "Hello"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp("abcd", "abce"));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp("abcd", "abce"));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : [%d]\n", ft_strcmp(strcmp2, strcmp1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : [%d]\n\n", strcmp(strcmp2, strcmp1));
}

void		ft_check_strcpy(void)
{
	char	str1[] = "Bonjour";
	char	str2[] = "Hello";
	char	str3[] = "libc most power full";
	char	str4[] = "libasm is for the ";
	char	str5[] = "petit";
	char	str6[] = "grand";
	char	str7[] = "";
	printf("============================================\n");
	printf("================ Ft_strcpy =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str1, str2));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str1, str2));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str3, str4));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str3, str4));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str5, str6));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str5, str6));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str6, str7));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str6, str7));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strcpy(str7, str6));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strcpy(str7, str6));
}

void		ft_check_strdup(void)
{
	char	dup[] = "New Malloc";
	char	dup1[] = "little";
	char	dup2[] = "Very big malloc, libasm is a project that was very interesting to me at the time and I am doing a test of my function with a rather large sentence without any goal, but here I fill as I can thank you for ignoring this sentence, there even punctuation or spelling, this is a crash test !";
	printf("============================================\n");
	printf("================ Ft_strdup =================\n");
	printf("============================================\n\n");
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strdup(dup));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup1));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strdup(dup1));
	printf("\033[36mresultat : libasm\033[00m\n");
	printf("return : |%s|\n", ft_strdup(dup2));
	printf("\033[36mresultat : libc\033[00m\n");
	printf("return : |%s|\n\n", strdup(dup2));
}

int			main(void)
{
	ft_check_write();
	ft_check_read();
	ft_check_strlen();
	ft_check_strcpy();
	ft_check_strcmp();
	ft_check_strdup();
	return (0);
}	
