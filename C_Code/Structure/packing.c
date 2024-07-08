#include<STDIO.H>
// ! C Program for the packing using the micro pragma
#pragma pack(1)
struct packing
    {
       int a;
       double b;
    }p;
int main()
{
    printf("%lu",sizeof(p));
    
    return 0;
}
