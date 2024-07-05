#include<STDIO.H>

//? C program for the static variable checking 
void suku(){

    for (int i = 1; i < 5; i++)
    {
       static int y=5;
       int p=8;
       y++;
       p++;
    }
    
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
