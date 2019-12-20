#include<stdio.h>
int main()
{
	int i=7,n;
	scanf("%d",&n);
	printf("%d",i);
	while(i<n)
	{
		i=i+3;
		printf("%d",i);
		i=i-2;
		printf("%d", i);
	}
}
