/*
same functionality of touch command - create a new file
how to use -   ./touchx     fileName
                 argc[0]    argv[1]

implemenet in this format =
1) Accept file name from command line
2) check whether file is exist or not 
3) if it is Existing retrun
4) if not existing create a file
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>


int main(int argc , char *argv[])
{

    if(argc != 2)
    {
        printf("ERROR: Insufficient Arguments\n");
        printf("Used Command as : ./touchx FileName \n");
        return -1;
    }


    // step 1 : check file is exist or not ---------------------------------------
    if(access(argv[1], F_OK) == 0)      
    {
        return 0;
    }
    else 
    {
        // step 2: create a file
        creat(argv[1],0777);
    }

    
    return 0;
}
