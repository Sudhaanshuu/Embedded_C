#include<STDIO.H>
// ^ C program for the multiple union object and then see the size od all with diff diff varibles
union multipleUnion1
{
    int x;
    float y;
    char k;
}m1;

union multipleUnion2
{
   int x;
   double p;
   float y;
}m2;
union multipleUnion3
{
    // long long int p;
   char k;
}m3;


int main(int argc, char const *argv[])
{
    printf("%d %d %d ",sizeof(m1),sizeof(m2),sizeof(m3));
    return 0;
}

