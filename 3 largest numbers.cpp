/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if(a>b&&a>c)
	{
		printf("a is larger");
	}
	else if(b>c)
	{
		printf("b is greater");
	}
	else
	{
		printf("c is greater");
	}
	return 0;
}
