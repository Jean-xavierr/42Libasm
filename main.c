#include <unistd.h>
#include <stdio.h>

char 	*copy_argv(char *);
int		ft_strlen(char *);
char	*ft_strcpy(char *, char *);
int		print(int a, char *, int b);

int		main(void)
{
	printf("%s\n", copy_argv("Assembleur !"));
	printf("%d\n", ft_strlen("Assembleur !"));
	printf("%d\n", print(1, "Bonjour", 1));
//	printf("%s\n", ft_strcpy("ASM", "test"));
	return (0);
}
