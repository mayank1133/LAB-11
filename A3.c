//2. Print multiplication table of a given number.

#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("ENTER N:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		sum=i*n;
		printf("%d\n",sum);
	}
	
}
