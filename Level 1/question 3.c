#include <stdio.h>

int main()
{
    int roll, phy, math, che, tot;
    float average;
    char name[50];
    
    printf("Enter name: ");
    scanf("%[^\n]%*c", name);
    
    printf("Enter roll no: ");
    scanf("%d", &roll);
    
    printf("Enter physics, maths and chemistry marks: ");
    scanf("%d %d %d", &phy, &math, &che);
    
    tot=phy+math+che;
    average=tot/3;
    
    printf("name: %s\n",name);
    printf("roll no: %d\n", roll);
    printf("Total marks: %d\n", tot);
    printf("Average : %.2f\n", average);
    
    return 0;
}