#include<STDIO.H>
//! C Program for the packing using the attribute
struct packing
    {
       int a;
       double b;
    }__attribute__((packed));
int main()
{
    struct packing p;
    
    
    printf("%lu",sizeof(p));
    
    return 0;
}
