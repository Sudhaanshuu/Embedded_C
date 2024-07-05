#include<STDIO.H>
//! C program for the Oping the file
int main(){
    FILE *suku;
    suku=fopen("su.txt","w");
    fclose(suku);
    return 0;
    
}