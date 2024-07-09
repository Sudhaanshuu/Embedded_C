#include<STDIO.H>
    enum cgu {Monday,Tuesday,Wednesday,Thruesday,Friday,Saturday,Sunday};
 int main(int argc, char const *argv[])
 {
    printf("Thruesday:%d\n",Thruesday);
    printf("Wednesday:%d\n",Wednesday);
    printf("Friday:%d\n",Friday);
    printf("Monday:%d\n",Monday);
    for (int i = Monday; i <= Sunday; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
 }
 