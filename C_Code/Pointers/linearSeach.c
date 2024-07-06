#include<STDIO.H>
// * C Program to perform liner seach using the pointers
int main(){
int suku[]={1,3,4,6,8};

int tar=6;
int *p;
p=&tar;

for (int i = 0; i < 5; i++)
{
   if (suku[i]==*p)
   {
   printf("Element fount at %d",i);
   }
   
}



    return 0;

}