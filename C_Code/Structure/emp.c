#include<STDIO.H>
// ^ C Program for the Nested Structure with strings
#include<STRING.H>
struct Org
{
   char O_Name[20];
   char O_Numbers[10];

   struct emp
   {
    int e_Id;
    char E_Name[20];
    int sal;
   } e1;
   
};

int main()
{
    struct Org o1;

    printf("Structure of org %d\n ",sizeof(o1));
    o1.e1.e_Id=418;
    strcpy(o1.e1.E_Name,"Human");
    o1.e1.sal=70000;
    strcpy(o1.O_Name,"Jaisu");
    strcpy(o1.O_Numbers,"82422");


    // ^ Printing Data

    printf("Name= %s and Number= %s\n",o1.O_Name,o1.O_Numbers);

    printf("Name- %s Id= %d  salary= %d \n",o1.e1.E_Name,o1.e1.e_Id,o1.e1.sal);
    
    return 0;
}
