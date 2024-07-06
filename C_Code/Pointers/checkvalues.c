#include<STDIO.H>
//C Program to see the diff od pointer and normal variable
int main(int argc, char const *argv[])
{
    int s=10;
    int *p;
    p=&s;
    printf("%d\n",s);
    printf("%d\n",&s);
    printf("%d\n",p);
    printf("%d\n",&p);
    printf("%d\n",*p);
    
    return 0;
}
