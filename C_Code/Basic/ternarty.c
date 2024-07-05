#include<STDIO.H>
//c program for the ternaryop for age and counrty checking
int main(){
    int s;
printf("Enter number ");

scanf("%d",&s);
printf("Enter You Country ");
char country[7];

scanf("%s",&s);
printf("%s",country);

(s>18 && country=='India')? printf("You can vote"): printf("You are a child");

    return 0;
}