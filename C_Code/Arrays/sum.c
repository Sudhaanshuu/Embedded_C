#include<STDIO.H>
// & C Program to find the Sum of the given arrays element. 
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
    int sum=0;
    for (int i = 0; i < s; i++)
    {
        sum=sum+su[i];
    }
    printf("Sum of all elemt of the array is %d",sum);
    
    
    return 0;
}
