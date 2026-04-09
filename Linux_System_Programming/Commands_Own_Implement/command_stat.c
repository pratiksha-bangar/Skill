/*
same functionality of stat command - Display file metedata
how to use -   ./statx     fileName
                 argc[0]    argv[1]

implemenet in this format =
1) Accept file name from command line
2) call access to check existence file 
3) call the system to get files meta data
4) Display teh metadata
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
    struct stat sobj;
    int iRet=0;

    if(argc != 2)
    {
        printf("ERROR: Insufficient Arguments\n");
        printf("Used Command as : ./statx FileName \n");
        return -1;
    }


    // step 1 : check file is exist or not ---------------------------------------
    if(access(argv[1], F_OK) == 0)      
    {
        //step 2: Display the metedata
        iRet = stat(argv[1],&sobj);

        if(iRet == -1)
        {
            printf("ERROR : Unable to Fetech statistical information\n");
            return -1;
        }
       
        printf("File Name:%s\n",argv[1]);
        printf("File Size:%ld\n",(long)sobj.st_size);
        printf("Inode Number:%ld\n",(long)sobj.st_ino);
        

    }
    else 
    {
        printf("ERROR : File not found\n");
        return -1;
    }

    
    return 0;
}
