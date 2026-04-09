/*
same functionality of pwd command - Dispay current working directory
how to use -   ./pwdx     
                argc[0]    

implemenet in this format =
1) call the systemc call getcwd
1) printf the result of getcwd
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>


int main(int argc , char *argv[])
{
    char Buffer[1024] = {'\0'};

    getcwd(Buffer,sizeof(Buffer));

    printf("%S\n",Buffer);





    return 0;
}
