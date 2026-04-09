/*
same functionality of cat command - Dispay file content on screen
how to use -   ./catx     fileName
                argc[0]    argv[1]

implemenet in this format =
1) Accept file name from command line
2) check whether file is exist or not 
3) if it is Existing then display content
4) if not existing - Display no such file or Directory exist
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>

#define MAX_BUFFER_SIZE 1024

int main(int argc , char *argv[])
{
    int fd =0;
    int iRet=0
    char Buffer[MAX_BUFFER_SIZE];

    memset(Buffer,'\0',sizeof(Buffer));     // clear bufefr

    if(argc != 2)
    {
        printf("ERROR: Insufficient Arguments\n");
        printf("Used Command as : ./catx FileName \n");
        return -1;
    }


    // step 1 : check file is exist or not ---------------------------------------
    if(access(argv[1], F_OK) != 0)       // if file is no
    {
        printf("cat: %s: No such file or directory\n",argv[1])
        return -1;
    }
    else 
    {
        // step 2: Display File Content --------------------------------------------
        fd = open(argv[1], O_RDONLY);

        if(fd < 0)
        {
            printf("ERROR : Unable to open file\n");
            return -1;
        }

        // step 3 : Read the file content ----------------------------------------
        while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
        {
            // ste 4 : Write the file content on screen ----------------------------
            write(1,Buffer,iRet);
        }
        printf("\n");  

        close(fd);
    }
    
    return 0;
}
