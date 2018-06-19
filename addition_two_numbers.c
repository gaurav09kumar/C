#include <stdio.h>
#include<conio.h>
int add(int v1,int v2){
    return (v1+v2);
}
void main(){
    int a,b;
    clrscr();
    printf("Enter the value of a and b;\n");
    scanf("%d %d",&a,&b);
    int c=add(a,b);
    printf("The addition of %d and %d gives:%d\n",a,b,c);
	getch();
}