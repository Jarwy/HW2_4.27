#include <stdio.h> 
#include <stdlib.h>


int main(void) 
{
int a, b, c;

printf("This is all Pythagorean triples for side 1,side 2,and the hypotenuse all no larger than 500.\n\n");

for (a = 1; a <500; ++a)
{
	for (b = 1; b <500; ++b)
	{
		for (c = 1; c <= 500; ++c)
		{
			
			if (a*a + b*b == c*c)
			{
				printf("Side1:%4d, Side2:%4d\n\n", a, b);
			}
			
		}
	}
}
system("pause");
return 0;
}
