#include <unistd.h>
#include <stdio.h>

char 	*copy_argv(char *);
int		ft_strlen(char *);
char	*ft_strcpy(char *, char *);

int		main(void)
{
	printf("%s\n", copy_argv("Assembleur !"));
	printf("%d\n", ft_strlen("Assembleur !"));
//	printf("%s\n", ft_strcpy("ASM", "test"));
	return (0);
}
