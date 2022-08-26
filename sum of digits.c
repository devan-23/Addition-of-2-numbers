#include <stdio.h>

void main() {
    // 
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int sum=0;
    while(n>0)
    {
      int d=n%10;
      sum=sum+d;
      n=n/10;
    }
    printf("The sum of the digits is %d",sum);
}
