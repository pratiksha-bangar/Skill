/*
same functionality of stat command - Display file Information
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


void DisplayPermission(mode_t m)
{
    char Arr[10] = "-----------";

    if(S_ISDIR(m)) Arr[0] = 'd';
    if(S_ISLNK(m)) Arr[0] = 'l';


    // Regular file permission
    if(m & S_IRUSR) Arr[1] = 'r';
    if(m & S_IWUSR) Arr[2] = 'w';
    if(m & S_IXUSR) Arr[3] = 'x';

    if(m & S_IRGRP) Arr[4] = 'r';
    if(m & S_IWGRP) Arr[5] = 'w';
    if(m & S_IXGRP) Arr[6] = 'x';

    if(m & S_IROTH) Arr[7] = 'r';
    if(m & S_IWOTH) Arr[8] = 'w';
    if(m & S_IXOTH) Arr[9] = 'x';
    
    printf("File Permission : %s\n",Arr);
}

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

        DisplayPermission(sobj.st_mode);

    }
    else 
    {
        printf("ERROR : File not found\n");
        return -1;
    }

    
    return 0;
}
