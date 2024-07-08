#include<STDIO.H>
#include<STRING.H>
// ^C Program for the basic defnition and syntax of the union
union basic
{
    int s;
    int k;

} b1,b2;

int main(int argc, char const *argv[])
{
    b1.s=10;
    b1.k=50;
    b2.k=70;
    printf("S:%d and K:%d\n",b1.s,b2.k);
    printf("S:%d and K:%d",b1.s,b1.k);
    printf("\n%d\n",sizeof(b1));
    return 0;
}

