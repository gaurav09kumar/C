#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    clrscr();
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is greater than %d",a,b);
    }
    else if(a<b){
        printf("%d is greater than %d",b,a);
    }
    else{
        printf("both are equal");
    }
	getch();
}