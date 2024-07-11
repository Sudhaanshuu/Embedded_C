#include<STDIO.H>
// C Program for the swap the with only two variable
int main(int argc, char const *argv[])
{
    int a=9,b=7;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d,%d",a,b);
    return 0;
}
