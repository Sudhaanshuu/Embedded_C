#include<STDIO.H>
// ? C program for the Find and delete the duplicate element in the Arrays

int main(int argc, char const *argv[])
{
    int su[]={1,2,3,2,2,4};
int k;
    for (int i = 0; i < 6; i++)
    {
        k=su[i];
        for (int j = 0; j < 6; j++)
        {
            if (j==i)
            {
                continue;
            }else{
                if (k==su[j]){
                for (int p = j; p < 5; p++){
                su[p]=su[p+1];
                    }   

            }
            }
            
            
            
        }
        
    }

    for (int i = 0; i < 6; i++)
    {
       printf("%d ",su[i]);
    }
    
    

    return 0;
}
