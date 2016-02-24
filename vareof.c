#include <stdio.h>

int main()
{

	int i;
	for (i = 1; getchar() == EOF; ++i)
		;
	printf("%d\n", i);
	
}
