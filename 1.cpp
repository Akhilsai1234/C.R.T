#include<stdio.h>
int main()
{
	int n,r,sum=0,temp,k=0;
	printf("enter the number=\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		n=n/10;
		k++;
	}
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	printf("it is armstrong number");
	else
	printf("it is not armstrong number");
	return 0;
}
