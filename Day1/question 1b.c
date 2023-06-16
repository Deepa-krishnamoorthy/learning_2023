//using if else method

#include <stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x>y){
        printf("The biggest number is %d",x);
    }
    else{
        printf("The biggest number is %d", y);
    }

    return 0;
}


//using ternary operator

#include <stdio.h>
#include<stdio.h>
int main()
{
    int x,y,big;
    scanf("%d %d",&x,&y);
    big = (x > y) ? x : y;
    printf("The biggest number is %d", big);

    return 0;
}