#include <stdio.h>

int _atoi(char *s);

int main(void)
{
	char *s = "happy";
        printf("%s\n", s);
	_atoi(s);
	printf("%s\n", s);
        return (0);
}
