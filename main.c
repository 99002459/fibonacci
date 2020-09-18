
#include <stdio.h>

#include "fibon.h"

int sqr(int num)
    {
	     s=sqrt(num);
             return (s*s==num);
     }
	int main()
	{
    	printf("Hello world!\n");

		int fibonacci = fibon(10);
		printf("boolean true or false = %d", fibonacci);

		return 0;
	}
