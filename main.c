#include <unistd.h>
#include <stdio.h>

char 	*copy_argv(char *);
int		ft_strlen(char *);
char	*ft_strcpy(char *, char *);
int		ft_write(int, char *, size_t);
int		ft_read(int, char *, size_t);

int		main(void)
{
	char	buf[42];
	printf("%s\n", copy_argv("Assembleur !"));
	printf("%d\n", ft_strlen("Assembleur !"));
	printf("%d\n", ft_write(1, "Bonjour\n", 8));
	printf("%d\n", ft_read(0, buf, 41));
//	printf("%s\n", ft_strcpy("ASM", "test"));
	return (0);
}
