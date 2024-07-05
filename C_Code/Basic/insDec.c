#include<STDIO.H>
//? C Programm for the for loop testing 
int main(){

printf("Enter the Number");
int s;
scanf("%d",&s);

for (int i = 0; i < s; i++)
{
    printf("%d ",i);
}
printf("\n");
for (int i = s; i >0; i--)
{
    printf("%d ",i);
}

    return 0;
}