#include<stdio.h>
int main()
 {
  int i=1,a,n,j;
 printf("enter number of rows");
  scanf("%d",&n);
   while(i<=n)
    { 
	j=1;
	a=1;
	while(j<i)
{
	printf("%d",a); a+=2; j++;
}
	while(a>0)
	{
		    printf("%d",a);
		a-=2;
	}
	printf("\n");
	i++;
  }
 }
