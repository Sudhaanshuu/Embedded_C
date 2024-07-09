#include<STDIO.H>
#include<STDLIB.H>
int main(int argc, char const *argv[])
{
   
printf("Calloc\n");
    int* suku1;
    int s1=6;
    suku1=(int*)calloc(5,sizeof(int));
    printf("%d\n",sizeof(suku1));

   


    if (suku1==NULL)
    {
        printf("Memory Not allocated");
    }else{
        printf("Memory  Allocated ");

        for (int i = 0; i < 20; i++)
        {
            scanf("%d",&suku1[i]);
        }
        

        for (int i = 0; i < 20; i++)
        {
            printf("Element: %d\n ",suku1[i]);
        }

    printf("%d\n",sizeof(suku1));
    suku1=realloc(suku1,10*sizeof(int));
    printf("%d\n",sizeof(suku1));
        
    }
    
    return 0;
}
