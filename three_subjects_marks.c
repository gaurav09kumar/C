#include <stdio.h>
#include <conio.h>
void main()
{
    int m1,m2,m3,total;
    float attendance;
    int i=0;
    up:printf("Enter the marks of the following subjects \n Enter m1 marks:");
    scanf("%d",&m1);
    printf("Enter m2 marks:");
    scanf("%d",&m2);
    printf("Enter m3 marks:");
    scanf("%d",&m3);
    if(m1>100 || m2>100 || m3>100 || m1<0 || m2<0 || m3<0){
        printf("Please make sure that the score of a particular subject cannot exceed 100  or be less than 0 \n");
        goto up;
    }
    else{
        printf("Enter the attendance of the student:");
        scanf("%f",&attendance);
        if(attendance<=100 && attendance>=0){
        total=m1+m2+m3;
        if(m1>=35 && m2>=35 && m3>=35){
            printf("pass \n");
            if((total)==240){
            printf("Percenatge of marks is 80 \n");
            if(attendance>=80){
                printf("Cerificate can be granted \n");
                goto up;
            }
            else{
                printf("Cerificate cannot be granted \n");
                goto up;
            }
        }
        else if((total)>240){
            printf("Percenatge of marks is more than 80 \n");
            if(attendance>=80){
                printf("Cerificate can be granted");
                goto up;
            }
            else{
                printf("Cerificate cannot be granted \n");
                goto up;
            }
        }
        else if(total<240){
            printf("Percentage of marks is less than 80 \n");
            if(attendance>=80){
                printf("Cerificate can be granted \n");
                goto up;
            }
            else{
                printf("Cerificate cannot be granted \n");
                goto up;
            }
        }
        else{
            printf("Certificate cannot be granted \n");
            goto up;
        }
        }
        else{
            printf("fail \n");
            printf("Percentage is less than 80 \n");
            printf("Certificate cannot be granted");
            goto up;
        }
        }
        else{
            printf("Please enter a proper attendance \n");
            goto up;
        }
    }
}
