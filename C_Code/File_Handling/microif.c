#include<STDIO.H>
//! C program for the Micros  for if and endif

#define Test 6

int main(int argc, char const *argv[])
{
    printf("Lol");
    #if Test>2
    printf("Hi");
    #elif(Test<2)
    printf("Bye");
    #else
    printf("Never");
    #endif
    return 0;
}
