#include <stdio.h>
#include <conio.h>
void main()
{
    float l,area,perimeter;
    clrscr();
    printf("Enter the value of l:\n");
    scanf("%f",&l);
    area=(l*l);
    perimeter=(4*l);
    printf("area is:%f and perimeter is:%f",area,perimeter);
    getch();
}