#include<STDIO.H>
// ! C program for login logic where if password wrong for 3 time it will block the user
int main(){
    int const password=418;
        int pass;
        int sout=0;
    do
    {
        printf("Enter password ");
        scanf("%d",&pass);
        if (password!=pass)
        {
            printf("Wrong password, ");
            sout++;
            if (sout>=3){
          printf("You have entered wrong password alot, You are Blocked ");
          break;
        }
        
        }
        
    } while (password!=pass);
    if (password==pass)
        {
           printf("Loging success ");
        }
    return 0;
}