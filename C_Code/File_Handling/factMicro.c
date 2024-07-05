#include<STDIO.H>
#define fact(n) ({int r=1;for (int i = 1; i < n; i++){r*=i;}r;})
//* C program for the factorial using the define macro
int main()
{
    int n=7,p=fact(n);
    printf("%d",p);
    return 0;
}
