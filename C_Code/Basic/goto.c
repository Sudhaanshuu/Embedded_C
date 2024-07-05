#include<STDIO.H>
//! c Program for the Goto stament structures
void checkOddEven(int a){
    if (a%2==0)
    {
       goto even;
    }else{
        goto odd;
    }
    even:
    printf("%d id Even",a);

    odd:
    printf("%d is Odd",a);
    
}

int main(int argc, char const *argv[])
{
    int s=9;
    checkOddEven(s);
    
    
    return 0;
}
