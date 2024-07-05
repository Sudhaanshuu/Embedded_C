#include<STDIO.H>
//C program for the logic of bi pine set and unset
int main(){

int Numb,bit;
printf("Enter the Integer Number 8 bit ");

scanf("%d",&Numb);
printf("Enter the bit nmber 0 to 7 ");
scanf("%d",&bit);

if (Numb&(1<<bit))
{
printf("Set pine ");
}else{
    printf("not Set ");
}

    return 0;
}