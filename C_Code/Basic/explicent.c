#include<STDIO.H>
//Program for the Expilcitly changing the datatype of the variable
int main(int argc, char const *argv[])
{
    int s=50,k=8;

float a,b;

a=s/k;
printf("a=%f\n",a);

b=(float)s/k;
printf("a=%f\n",b);
    return 0;
}
