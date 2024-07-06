#include<STDIO.H>
//^ C Program for the Pointers add and sub
int main(int argc, char const *argv[])
{
    int s=5,*p1=&s;
    char k='A' ,*p2=&k;
    float z=20.6,*p3=&z;
p1++,p2++,p3++;
printf("%d\n",*p1);
printf("%f\n",*p2);
printf("%c\n",*p3);
    return 0;
}
