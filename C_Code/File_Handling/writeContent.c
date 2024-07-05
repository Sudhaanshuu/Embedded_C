#include<STDIO.H>
//^ c program for the checking the prebuild micro
int main(){
// FILE *suku, *s;
// suku=fopen("su.txt","w");
// s=fopen("su.txt","w");
// fprintf(suku,"Hi sudhanshu");
// fprintf(s,"Hi Kumar");
printf("%s\n",__FILE__);
printf("%s\n",__DATE__);
printf("%s\n",__TIME__);
printf("%d\n",__LINE__);
// fclose(suku);
// fclose(s);
    return 0;
}