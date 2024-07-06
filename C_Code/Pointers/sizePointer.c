#include<STDIO.H>
// & C program for the cheking the size of the int pointer
struct sizePtr{};
void values(int a,int b){

};


int main(int argc, char const *argv[])
{
    int s=10;
    char k='G';
    struct sizePtr sp;

    int* ptr_int= &s; 
    
    printf("%d",sizeof(ptr_int));
    return 0;
}
