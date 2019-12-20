#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	a==b&&b==c?printf("equilateral triangle"):a==b||b==c||c==a?printf("isocles triangle"):printf("scalene triangle");
}
