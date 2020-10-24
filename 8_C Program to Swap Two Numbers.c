#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 1st number: ");
	scanf("%d",&a);
	printf("enter 2nd numer: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("vlaue of 1st number is %d\n",a);
	printf("vlaue of 2nd number is %d\n",b);
	
}
