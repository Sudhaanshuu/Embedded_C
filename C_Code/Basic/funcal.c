#include<STDIO.H>
// ?C Program for the Calculator Using the Function
int cal(int a,int b,char c){
    int result;
     if (c=='+')
        {
            result=a + b;
        }
        if (c=='-')
        {
            result=a-b;
        }
        if (c=='*')
        {
            result=a*b;
        }
        if (c=='/')
        {
            result=a/b;
        }
        if (c==5)
        {
            result=a%b;
        }
        
    return result;
}
int main(){

    printf("Enter the Operator ");
    char op;
    scanf("%c",&op);
    int a,b;
    printf("enter two numbers ");
    scanf("%d%d",&a,&b);
    int res=cal(a,b,op);
    printf("%d",res);
    return 0;
}