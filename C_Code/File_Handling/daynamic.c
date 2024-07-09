#include<STDIO.H>
#include<STDLIB.H>

int main(int argc, char const *argv[])
{

    int* su;
    int s,k;

    printf("Enter numbers of element ");
    scanf("%d",&s);

    printf("Entered  elment %d",s);

    su=(int*)malloc(s*sizeof(int));

    if (su==NULL)
    {
       printf("Memory not allicated\n");
    }else{
        printf("\nMemory allocated\n");

        for (k = 0; k < s; k++)
        {
            printf("At %dth ",k);
            scanf("%d",&su[k]);
        }

        for (int i = 0; i < s; i++)
        {
            printf("Element %dth: %d\n",i+1,su[i]);
        }
        
        
    }
    
    
    return 0;
}
