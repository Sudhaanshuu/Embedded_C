#include<STDIO.H>
//C program for the registor program Stroage class
void sum(){
    extern int s;
    printf("%d",s);
    s=419;
    printf("%d",s);
}

int main()
{
    sum();
    printf("%d",s);
    return 0;
}
