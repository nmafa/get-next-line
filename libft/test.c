#include "libft.h"
#include <stdio.h>

int main()
{
	char a = 'A';

	if (ft_isascii(a))
		printf("Is ascii");
	else
		printf("Is not ascii");
	return (0);
}
