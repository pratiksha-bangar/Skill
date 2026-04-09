/*
same functionality of cd command - create a new file
how to use -   ./cdx       Directory path
                 argc[0]    argv[1]

implemenet in this format =
1) Accept new directory path
2)  call chdir with that path
3) call getcwd to check the change path
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>


int main(int argc , char *argv[])
{
    int iRet= 0;

    if(argc != 2)
    {
        printf("ERROR: Insufficient Arguments\n");
        printf("Used Command as : ./cdx Directory path \n");
        return -1;
    }


    if(chdir(argv[1]) == -1)
    {
        printf("ERROR : Unable to change current Directory\n");
        return -1;
    }

    char Buffer[256] = {'\0'};

    // step 2: change the path -----------------------------------------------------------
    getcwd(Buffer,sizeof(Buffer)-1);

    printf("Current Directory changes:%s\n",Buffer);


    
    return 0;
}
