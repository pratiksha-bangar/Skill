/*
same functionality of rm command - remove file 
how to use -   ./statx     fileName
                 argc[0]    argv[1]

implemenet in this format =
1) Accept file name from command line
2) call access to check existence file 
3) if file is exist then remove this file
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>
#include<sys/stat.h>


int main(int argc , char *argv[])
{
    int iRet=0;

    if(argc != 2)
    {
        printf("ERROR: Insufficient Arguments\n");
        printf("Used Command as : ./rmx FileName \n");
        return -1;
    }


    // step 1 : check file is exist or not ---------------------------------------
    if(access(argv[1], F_OK) == 0)      
    {
        //step 2: remove this file
        unlink(argv[1]); 
    }
    else 
    {
        printf("ERROR : File not found\n");
        return -1;
    }

    
    return 0;
}
