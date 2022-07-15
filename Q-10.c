#include<stdio.h>
#include<conio.h>
int main()
{
    int day,month,year;
    printf("Enter a date:");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day-%d,Month-%d,Year-%d",day ,month,year);
    getch();
    return 0;
}
