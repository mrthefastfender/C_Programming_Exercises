#include <stdio.h>

int main()
{
	int c;
	c = getchar();
	if((c = getchar()) == EOF)
		printf("%d", EOF);
}
