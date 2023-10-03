//5. Find factors of the given number.
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the number n:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("factor is :%d:\n",i);
        
    }




}
