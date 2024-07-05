#include<STDIO.H>
//? C program fir the Increment and decrement with the control statemnet 
int main(){
int s;
    printf("Enter the Number ");
    scanf("%d",&s);

    if (s>=18 && s<100)

    {
    printf("Inc\n ");
    s++;
    } else if (s>10)
    {
        printf("Dec \n ");
        s--;
    }else{
        printf("You are you\n ");
        --s;
    }
    ++s;
    printf("Final S %d \n ",s);
    
    
    

    return 0;
}