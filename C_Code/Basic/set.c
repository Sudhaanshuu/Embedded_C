#include<STDIO.H>
//? C program for the embadded logic of set a bit , clear a boit and loggle a bit
int setbit(int a,int b){
    return (a|(1<<(b-1)));
}
int clearbit(int a,int b){
    return (a&(~(1<<(b-1))));
}

int toggleBit(int a,int b){
    return (a^(1<<(b-1)));
}
int main(int argc, char const *argv[])
{

    int n=5,k=1;
    printf("%d with %d-th bit set %d\n",n,k,setbit(n,k));


    printf("%d with %d-th clear %d\n",n,k,clearbit(n,k));


    printf("%d with %d-th toggele %d\n",n,k,toggleBit(n,k));
    
    
    return 0;
}
