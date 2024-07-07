#include<STDIO.H>
// !*?^ program for cheking pointers value
int main(int argc, char const *argv[])
{
    int a=15,*s=&a;
printf("%d\n",(*s));
printf("%d\n",(*s++));
printf("%d\n",(*s)++);
printf("%d\n",*s++);
printf("%d\n",(*s)=*s+1);
    return 0;
}
