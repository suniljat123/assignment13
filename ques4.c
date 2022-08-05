#include<stdio.h>
void odd(int );
int main()
{
    int n;
    printf("Enter value of N=");
    scanf("%d",&n);
    n=n*2-1;
    odd(n);
    return 0;
}
void odd(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        odd(n-2);

    }
}
