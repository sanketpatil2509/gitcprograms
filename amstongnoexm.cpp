#include<stdio.h>
main()
{
	int j,n,sum=0,temp;
	printf("\n Enter any number=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		j=n%10;
		sum=sum+(j*j*j);
		n=n/10;
		
	}
	if(temp==sum)
	{
		printf("\n amstrong number");
		
	}
	else 
	{
		printf("\n is not amstorng number");
	}
}
printf(\n "hello world");
