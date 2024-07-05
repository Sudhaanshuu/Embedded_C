#include<STDIO.H>
//* Program for the value formating.
int main(){
float s,k;

printf("Enter the value of the s, k ");
int s1,k1;
scanf("%2d %3d",&s1,&k1);
printf("%d and %d",s1,k1);

printf("Enter the value of the s, k ");
scanf("%2f %3f",&s,&k);

printf("%f and %f",s,k);
    return 0;
}