#include<stdio.h>
#include<conio.h>
int main()
{
    int R;
    float A;
    printf("Enter a radius:");
    scanf("%d",&R);
    A=3.14*R*R;
    printf("Area of Circle is %f having the radius %d",A,R);
    return 0;
    getch();
}
