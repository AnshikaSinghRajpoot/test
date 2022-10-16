#include<stdio.h>
int main()
{
	int usec,h,m,sec;
	printf("enter the seconds");
	scanf("%d",&usec);
	
	if(usec>=3600)
	{
		h=usec/3600;
		m=(usec%3600)/60;
		sec=(usec%3600)%60;
		printf("h:%d\nm:%d\ns:%d\n",h,m,sec);
	}
	else if(usec>=60)
	{
		m=(usec%3600)/60;
		sec=(usec%3600)%60;
		printf("m:%d\ns:%d\n",m,sec);
	}
	else
	{
		printf("s:%d\n",usec);
	}
	
}