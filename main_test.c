/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jereligi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:15:56 by jereligi          #+#    #+#             */
/*   Updated: 2020/02/19 11:42:06 by jereligi         ###   ########.fr       */
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


}
