#include<STDIO.H>
#include<STRING.H>
// * C Program for the syntax of the union
union syntax
{
    int sukuId;
    char sukuName[20];
    float suSal;
};

int main(int argc, char const *argv[])
{
    int id;
    char name[20];
    float saly;
    printf("Enter id, Salary and Name ");
    scanf("%d",&id);
    scanf("%f",&saly);
    scanf("%s",&name);


    union syntax u1,u2,u3;
    u1.sukuId=id;
    strcpy(u2.sukuName,name);
    u3.suSal=saly;

    printf("Id:%d and Name:%s and Sal:%f ",u1.sukuId,u2.sukuName,u3.suSal);
    return 0;
}
