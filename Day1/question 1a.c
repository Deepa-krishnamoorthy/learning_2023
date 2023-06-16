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

    return 0;
}
