#include<stdio.h>
void printn(int );
int main()
{
    int n;
    printf("Enter value of N=");
    scanf("%d",&n);
    printn(n);
    return 0;
}
void printn(int n)
{
    if(n>0)
    {
        printn(n-1);
        printf("%d ",n);

    }
}
