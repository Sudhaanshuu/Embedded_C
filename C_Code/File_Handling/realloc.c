#include<STDIO.H>
#include<STDLIB.H>


int main(int argc, char const *argv[])
{
    printf("Malloc\n");
    int* suku;
    int s=3;
    suku=(int*)malloc(5*sizeof(int));

    printf("%d\n",sizeof(suku));

    suku=realloc(suku,10*sizeof(int));
    printf("%d\n",sizeof(suku));


    if (suku==NULL)
    {
        printf("Memory Not allocated");
    }else{
        printf("Memory  Allocated ");

        for (int i = 0; i < s; i++)
        {
            printf("Element: %d\n ",suku[i]);
        }
        
    }
    printf("Calloc\n");
    int* suku1;
    int s1=6;
    suku1=(int*)calloc(5,sizeof(int));
    printf("%d\n",sizeof(suku1));

    suku1=realloc(suku1,10*sizeof(int));
    printf("%d\n",sizeof(suku1));


    if (suku1==NULL)
    {
        printf("Memory Not allocated");
    }else{
        printf("Memory  Allocated ");

        for (int i = 0; i < 10; i++)
        {
            scanf("",&suku1[i]);
        }
        

        for (int i = 0; i < s1; i++)
        {
            printf("Element: %d\n ",suku1[i]);
        }
        
    }

    // void free(suku)

    
    return 0;
}
