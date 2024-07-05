#include<STDIO.H>
//C program for the Define Micro
#define DEBUG
 //!Define the Debug



int main(int argc, char const *argv[])
{
    #ifdef DEBUG
    printf("Human");
    #else
    printf("Alien"); // ?Never Compile
    #endif
    return 0;
}
