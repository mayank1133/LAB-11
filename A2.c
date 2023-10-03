#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the number for required sum:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum +=i;
	}
	printf("%d",sum);
	return 0;
}

