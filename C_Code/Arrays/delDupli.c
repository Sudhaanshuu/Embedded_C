#include<STDIO.H>
// ? C program for the Find and delete the duplicate element in the Arrays
void cal(int su[], int s){
    
    for (int i = 0; i < s; i++)
    {
        for (int j = i+1; j < s-1; j++)
        {
            if (su[i]==su[j])
            {
                for (int k = j; k < s; k++)
                {
                 su[k]=su[k+1];
                 
                }
                i--;
                s--;
                
            }
        }

    }
    for (int i = 0; i < s; i++)
    {
        if (su[i]!=0)
        {
        printf("%d ",su[i]);
        }
        
    }
    

}
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


cal(su,s);
    
    

    return 0;
}