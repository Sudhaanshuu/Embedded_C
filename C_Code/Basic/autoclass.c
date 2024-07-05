#include<STDIO.H>
//? C program for the checking which variable is accessable

void suku(){
    printf("Love You ");
    auto int a=416;
    printf("%d",a);
    a=a+7;
}

int main()
{
    suku();

    // printf("%d",a);
    return 0;
}
