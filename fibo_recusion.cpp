#include<stdio.h>
int fibo(int);
int main()
{
    int n,i;

    printf("\nEnter no. of terms: ");
    scanf("%d",&n);
    printf("\nFibonacci series of %d terms:\n",n);
    for(i=0;i<n;i++)
        printf("  %d",fibo(i));
    printf("\n\n");
   return 0;
}
int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1||n==2)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}

