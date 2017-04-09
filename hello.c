#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char hello[] = "Hello 0!";
	char hello1[] = "Hello 123!";
	//printf("%s\n", hello);
    int i = 2;
    if (i)
    {
	   printf("%s\n", hello1);
    }
    else
    {
	   printf("%s\n", hello);
    }

	return 0;
}