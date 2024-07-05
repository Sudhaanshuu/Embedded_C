#include<STDIO.H>
// C Program for the formating of the datatypes
int main(){
    int s=56,u=56,d=56;
    // scanf("Enter integer %d",&s);
    // scanf("Enter the hexazadeimail %0xi",&u);
    // scanf("Enter the octal %0i",&d);


    printf("print using %%d %d\n",s);
    printf("print using %%i %3i\n",s);
    printf("print using %%i %X\n",u);
    printf("print using %%0i %o\n",d);
    printf("print using %%0i %dl\n",d);


    return 0;


}