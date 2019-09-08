#include <stdio.h>

int print(int nb)
{
	if (nb < 0) 
	{
		return (0);
	}
	printf("%d", nb + print(nb - 1));
	nb --;
	return (nb);
}

int main(void)
{
	print(2);
	printf("\n%d\n", print(2));
	return (0);
}
