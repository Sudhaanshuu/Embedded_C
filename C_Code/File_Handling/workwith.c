#include<STDIO.H>
//& C program for the checking weather User have the accs to open a file or not
int main(int argc, char const *argv[])
{
    FILE *su;

    su=fopen("suu.txt","r");
    char tem[100];
    if (su!=NULL)
    {
        while (fgets(tem,100,su))
        {
            printf("%s",tem);
        }
        
    }else{
        printf("Not having access to open");
    }

    fclose(su);
    
    return 0;
}
