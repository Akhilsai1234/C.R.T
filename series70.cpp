#include<stdio.h>
int main()
{
	int i=80,n;
	scanf("%d",&n);
	printf("%d",i);
	while(i>=n)
	{
		i=i-70;
		printf("%d",i);
		i=i+60;
		printf("%d", i);
		i=i-55;
		printf("%d", i);
		i=i+10;
	    printf("%d", i);	
	}
}
