#include<STDIO.H>
// * C program for the double pointer concept
int main(int argc, char const *argv[])
{
    int s=5;
    int *p;
    int **q;
    int ***k;
    k=&q;
    p=&s;
    q=&p;

    printf("%d\n",&s);
    printf("%d\n",s);
    printf("%d\n",**q);
    printf("%d\n",*q);
    printf("%d\n",*p);
    printf("%d\n",&p);
    printf("%d\n",&q);
    printf("%d\n",*k);
    printf("%d\n",**k);
    printf("%d\n",***k);
    
    return 0;
}
