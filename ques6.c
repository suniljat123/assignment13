#include<stdio.h>
void even(int );
int main()
{
    int n;
    printf("Enter value of N=");
    scanf("%d",&n);
    n=n*2;
    even(n);
    return 0;
}
void even(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        even(n-2);
    }
}
