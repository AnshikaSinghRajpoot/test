#include<stdio.h>
#include<math.h>
int main()

{
	
	float a,b,c,r1,r2,term;
	printf("enter the number");
	scanf("%f %f %f",&a,&b,&c);
	
	term=b*b-4*a*c;
	
	if(term>0)
	{
		
		r1=(-b+sqrt(term))/(2*a` );
		r2=(-b-term)/(2*a);
	    printf("%d roots are imaginary",r1);
	}
	else
	{
		printf("the roots are not imaginary");
	}
	
}