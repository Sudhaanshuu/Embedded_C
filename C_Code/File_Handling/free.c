#include<STDIO.H>
#include<STDLIB.H>

int main(int argc, char const *argv[])
{ int* su,suu;
int s;
printf("Enter the number of element");
scanf("%d",&s);

su=(int*)malloc(s*sizeof(int));
suu=(int*)calloc(s,sizeof(int));

if (su==NULL||suu==NULL)

{
printf("Memory not allocated\n");

}else{
    printf("Memory allocated\n");
    su[0]=90;
    printf("\n%d\n",su[0]);
    free(su);
    free(suu);
    printf("\n%d\n",su[0]);
    printf("\nMemory block dealoocated\n");

}

    
    return 0;
}
