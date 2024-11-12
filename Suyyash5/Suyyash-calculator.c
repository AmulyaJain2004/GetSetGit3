#include<stdio.h>
void main(){

    int a,b,sum,sub,mul,div;
    char operator;
    printf("Enter the operator: ");
    scanf("%c",&operator);
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    switch(operator)
    {
        case '+':
        sum = a+b;
        printf("addition:%d",sum);
        break;
        case '-':
        sub = a-b;
        printf("subtraction:%d",sub);
        break;
        case '*':
        mul=a*b;
        printf("product:%d",mul);
        break;
        case '/':
        if(b!=0){
        div=a/b;
        printf("division: %d",div);
        }
        else{
            printf("division undefined");
        }
        break;
        default:
        printf("Enter a valid operator");

}
}
