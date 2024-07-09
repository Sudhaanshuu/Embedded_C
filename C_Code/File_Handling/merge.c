#include<STDIO.H>
#include<STDLIB.H>

int main(int argc, char const *argv[])
{
    
  FILE  *su=fopen("su.txt","r");
FILE *ku=fopen("ku.txt","r");

    FILE *suku =fopen("suku.txt","w");

    if (su==NULL||ku==NULL||suku==NULL)
    {
        printf("Cant open the file");
        exit(0);
    }
    

    
    char s;
    while ((s=fgetc(su))!=EOF)
    {
        fputc(s,suku);
    }
    while ((s=fgetc(ku))!=EOF)
    {
        fputc(s,suku);
    }

    // if (feof(su)&&foef(ku))
    // {
    //     /* code */
    // }

    printf("Merged file");
char s1;
    while ((s1=fgetc(suku))!=EOF)
    {
        putchar(s1);
    }
    printf("%s",s1);

    fclose(su);
    fclose(ku);
    fclose(suku);
    
    
    return 0;
}
