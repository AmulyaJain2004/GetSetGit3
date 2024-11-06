#include<stdio.h>
int mul(int n,int m)
{
    int b=n*m;
    return b;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int x=mul(n,m);
    printf("%d",x);
    return 0;
}
