#include<STDIO.H>
// ! C program to find the smallest and lasgers after sorting
void suLast(int s, int *suku){
for (int i = 0; i < s; i++)
{
    for (int j =i+1 ; j < s; j++)
    {
        if (*(suku+i)>*(suku+j))
        {
            int t=*(suku+i);
            *(suku+i)=*(suku+j);
            *(suku+j)=t;
        }
        
    }
    
}

}
int main(int argc, char const *argv[])
{
    int s;
    printf("Enter thhe size");
    scanf("%d",&s);
int suku[10];
    for (int i = 0; i < s; i++)
    {
printf("Ele at %d ",i);
scanf("%d",&suku[i]);
    }

    suLast(s,suku);

    for (int i = 0; i < s; i++)
    {
        printf("%d ",suku[i]);
    }
    printf("\nSmallest %d",suku[0]);
    printf("\nlargest %d",suku[s-1]);
    
    
    return 0;
}
