#include<STDIO.H>
#include<STDLIB.H>

void checkCalloc(int *p ,int s){
p=(int*)calloc(5,sizeof(int));
if (p==NULL)
    {
       printf("\nMemory not allocated\n");
     
    }else{
        printf("\nMemory allocated\n");
        for (int i = 0; i < s; i++)
        {
           printf("Elemnt  %d \n",p[i]);
        }
    }
    

}
int main()
{
    int* suku;
    int s;

    printf("Enter the number of elements ");
    scanf("%d",&s);

    printf("Entered ele %d",s);

checkCalloc(&suku,s);


    return 0;
}
