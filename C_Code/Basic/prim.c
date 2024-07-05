#include<STDIO.H>
//? C program for the check prime till given range Incometed
int prim(int a){
    int n=1;
    while (a>=n)
{
 for (int i = 2; i < n/2; i++)
 {

    if (n%i==0)
    {
       return 0;
    }
return 1;
 }
 n++; 
}
}

int main(){

    printf("Enter the range");
    int range;
    scanf("%d",&range);

    for (int i = 1; i < range; i++)
    {
        if (prim(i))
    {
        printf("%d",i);
    }
    }
    return 0;
    
    



}