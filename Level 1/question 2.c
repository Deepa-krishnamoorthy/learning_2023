#include <stdio.h>

int main()
{
    int mark;
    scanf("%d", &mark);
    if (mark>=90 && mark<=100)
    printf("Grade A");
    else if (mark>=75 && mark<90)
    printf("Grade B");
    else if (mark>=60 && mark<75)
    printf("Grade C");
    else if (mark>=50 && mark<60)
    printf("Grade C");
    else
    printf("Grade F");
    return 0;
}