#include<stdio.h>
void main()
{
	int x,y,z=1,i;
	printf("ENTER X:");
	scanf("%d",&x);
	printf("ENTER Y:");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		z=x*z;
	}
	printf("%d",z);
	
}