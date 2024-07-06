#include<STDIO.H>
// ^ C program for the Micros and Set Clear toggle
#define set(n,nb) (n|(1<<nb))
#define clear(n,nb) (n&(1<<nb))
#define toggle(n,nb) (n&~^(1<<np))

int main(int argc, char const *argv[])
{
    int n=13,nb=2;
set(3,10);
clear(2,10);
printf("toggle %d",toggle(n,nb));
    return 0;
}
