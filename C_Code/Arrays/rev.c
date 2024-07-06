#include<STDIO.H>
//! C program for the Revesin the Given Arrays 
int main(int argc, char const *argv[])
{
    printf("Enter the size of the Arrays");
    int s;
    scanf("%d",&s);

    int su[10];
    for (int i = 0; i < s; i++)
    {
        printf("Enter Elemnt for the %dth possion",i);
        scanf("%d",&su[i]);
    }
    int j=s-1;
    int suu[10];
    for (int i = 0; i < s; i++)
    {
        suu[i]=su[j];
        j--;
    }

    for (int i = 0; i < s; i++)
    {
      printf("%d ",suu[i]);
    }
    
    
    return 0;
}