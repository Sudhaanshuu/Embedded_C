#include<STDIO.H>
// ? C Program for the structures using the pointers parameters
struct A
{
    int x;
    int y;
};
void suFun(struct A *su){
    printf(" %d %d",su->x,su->y);
    su->x=100;
    su->y=300;
}
int main(int argc, char const *argv[])
{
struct A su={20,60};
suFun(&su);
printf(" after call %d %d ",su.x,su.y);
    return 0;

}

    

