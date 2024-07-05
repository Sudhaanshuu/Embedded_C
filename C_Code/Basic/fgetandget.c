#include<STDIO.H>
//? Program for the fgets and gets
int main(){
char su[60];

printf("Enter the Sring ");
scanf("%s",&su);
printf("Entered String %s\n",su);

gets(su);

printf("Entered String %s\n",su);

fgets(su,50,stdin);
printf("Entered String %s\n",su);

    return 0;
}