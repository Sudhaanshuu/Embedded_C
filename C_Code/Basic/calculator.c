#include<STDIO.H>
//* Basic Calculator
int main(){
int input;
int result;

do{
 printf("Enter your choise\n1. For Add\n2. For Sub\n3. For Multiply\n4. For Div\n5. For Reminder\n6. For exit\n");
    scanf("%d",&input);
     int a,b;
    if (input<6){
     printf("\nEnter two numbers ");
     scanf("%d%d",&a,&b);
            }

        if (input==1)
        {
            result=a+b;
            printf("Result= %d",result);
        }
        if (input==2)
        {
            result=a-b;
            printf("Result= %d",result);
        }
        if (input==3)
        {
            result=a*b;
            printf("Result= %d",result);
        }
        if (input==4)
        {
            result=a/b;
            printf("Result= %d",result);
        }
        if (input==5)
        {
            result=a%b;
            printf("Result= %d",result);
        }
        
        }while (input<6);
    return 0;

}