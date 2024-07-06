#include<STDIO.H>
// C Program for the covert Lowercase to upper case
int main(int argc, char const *argv[])
{
    printf("Enter the Word");
    char su[4];
    scanf("%[^\n]%*c",&su);

    for (int i = 0; i < 4; i++)
    {
         if(su[i]>96)
    {
        su[i]=su[i]-32;
        

    }
    printf("%c",su[i]);
    }
    
    


    return 0;
}
