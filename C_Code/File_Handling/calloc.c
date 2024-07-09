#include<STDIO.H>
#include<STDLIB.H>

int main(int argc, char const *argv[])
{
    int* suku;
    int s;

    printf("Enter the number of elements ");
    scanf("%d",&s);

    printf("Entered ele %d",s);


suku=(int*)calloc(5,sizeof(s));
    if (suku==NULL)
    {
       printf("\nMemory not allocated\n");
    }else{
        printf("\nMemory allocated\n");

        for (int i = 0; i < s; i++)
        {
           printf("Elemnt at %d ",i);
           scanf("%d",&suku[i]);
        }
        for (int i = 0; i < s; i++)
        {
           printf("Elemnt  %dth : %d \n",i+1,suku[i]);
        }
        
    }
    
    return 0;
}
