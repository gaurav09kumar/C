#include <stdio.h>
#include <conio.h>
void main()
{
    float p,t,r,si;
    clrscr();
    printf("Enter the value of p,t and r:\n");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("simple interest is:%f",si);
    getch();
}