#include <stdio.h>
int main()
{
    int a, b;
    char c[5];
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter the operator: ");
    scanf("%s", c);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    
    if (c[0]== '+')
    printf("%d", a+b);
    else if (c[0]=='-')
    printf("%d", a-b);
    else if (c[0]=='*')
    printf("%d", a*b);
    else if (c[0]=='/')
    printf("%d", a/b);
    else
    printf("Enter the correct operator");
    
    
    return 0;
}