#include<STDIO.H>

//* C Program for Defining the macro for the cobntavting the integers
#define s(a,b,c,d) a##b##c##d
int main(int argc, char const *argv[])
{
    int a=s(344,67,5,8);
    printf("%d",a);
    return 0;

    
}
