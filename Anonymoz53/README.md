# GetSetGit3
#include <stdio.h>

void main()
{
    int a,b,x;
    
    printf(" a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d",&b);

    int sum = a + b;
    int difference = b-a;
    int product = a*b;
    int quotient = b/a;
    int remainder = b%a;

    printf("what do you want to do with the numbers?\n");
    printf("for addition press 1\n");
    printf("for subraction press 2\n");
    printf("for multiplication press 3\n");
    printf("for division press 4\n");
    printf("for remainder press 5\n");
    scanf("%d",&x);

    switch (x)
    {
        case 1:
        printf("sum = %d",sum);
        break;
        case 2:
        printf("difference = %d",difference);
        break;
        case 3:
        printf("product = %d",product);
        break;
        case 4:
        printf("quotient = %f",quotient);
        break;
        case 5:
        printf("remainder = %f",remainder);
        break;
    }
    

 
}
