#include<STDIO.H>
//? C program for the file management of the errors
int main(){
FILE *suku;

suku=fopen("suu.txt","a");
fprintf(suku," Love You");
fclose(suku);
    return 0;
}