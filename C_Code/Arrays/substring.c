#include<STDIO.H>
// * C Program to find the sub string   
int main(int argc, char const *argv[])
{
    char su[100];
    printf("Enter the String ");
    scanf("%[^\n]%*c",&su);
    printf("%s",su);

    char t[]={1,4,6,4,3};
    
    
for (int i = 0; i < 100; i++)
{
   if (su[i]==t[0])
   {
    if (su[i+1]==t[1])
    {
        printf("FOund");
        break;
    }
    
   }
   printf("Not found");
}

    return 0;
}
