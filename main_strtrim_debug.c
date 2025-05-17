#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	const char *s1 = "   HOLA   ";
	const char *set = " ";
	char *trimmed;

	trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("Original: \"%s\"\n", s1);
		printf("Trimmed : \"%s\"\n", trimmed);
	}
	else
	{
		printf("Trimmed string is NULL\n");
	}
	return (0);
}