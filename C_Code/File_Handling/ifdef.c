#include<STDIO.H>
#define Test 5
//! C program for the Defining te Test and use the #ifdef
int main(int argc, char const *argv[])
{
#ifdef Test 
printf("True\n");
printf("%d",Test);
#undef Test
// printf("%d",Test);
printf("False");
#endif

    return 0;
}
