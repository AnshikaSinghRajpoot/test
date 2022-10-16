#include<stdio.h>
int main()
{
	int a,b;
	printf("enter 2 numbers:");
	scanf("%d %d",&a,&b);
	(a<b)?printf(" %d is small",a):printf("%d is small",b);
}