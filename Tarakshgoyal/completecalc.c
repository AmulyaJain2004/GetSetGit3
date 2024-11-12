#include<stdio.h>
int add(int n,int m)
{
    int b=n+m;
    return b;
}
int mul(int n,int m)
{
    int b=n*m;
    return b;
}
int div(int n,int m)
{
    int b=n/m;
    return b;
}
int sub(int n,int m)
{
    int b=n-m;
    return b;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    printf("1 for add\n");
    printf("2 for mul\n");
    printf("3 for div\n");
    printf("4 for sub\n");
    int c;
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        {
            int x=add(n,m);
            printf("%d",x);
            break;
        }
        case 2:
        {
            int x=mul(n,m);
            printf("%d",x);
            break;
        }
        case 3:
        {
            int x=div(n,m);
            printf("%d",x);
            break;
        }
        case 4:
        {
            int x=sub(n,m);
            printf("%d",x);
            break;
        }
        default:
        {
            printf("enter a valid number");
        }
    }
    return 0;
}
