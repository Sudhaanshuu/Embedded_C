#include<STDIO.H>
//todo C Program for the Checking the size of the struct objects and then notice the size
 struct A{
char c;
short p;
 }aObj;

 typedef struct B{
    short k;
    char p;
    int o;
 } bObj;
 typedef struct c{
    double k;
    char p;
    int o;
 } cObj;
 typedef struct d{
    char s;
    double z;
    int o;
 } dObj;
int main()
{
    printf("A = %lu\n",sizeof(aObj));
    printf("B = %lu\n",sizeof(bObj));
    printf("C = %lu\n",sizeof(cObj));
    printf("D = %lu\n",sizeof(dObj));
    return 0;
}
