#include<STDIO.H>
// & C Programfor the Printing of the Pointers
int main(int argc, char const *argv[])
{
    int suku[]={1,4,8};
    int *p=&suku;
    printf("%d",*(++p));
    return 0;
}
