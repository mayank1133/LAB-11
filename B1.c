//1. Print the Fibonacci Series.
#include <stdio.h>
void main() 
{
  int i, n,t1 = 0, t2 = 1,next = t1 + t2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; ++i) 
  {
    printf("%d, ", next);
    t1 = t2;
    t2 = next;
    next = t1 + t2;
  }
}
