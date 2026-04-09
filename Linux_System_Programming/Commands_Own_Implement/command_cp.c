// same functionality of copy command - copy of file - copy one file data into another file 
// how to use - ./cpx     source.c  Destination.c
                //argv[0]  argv[1]   argv[2]

                // argc = 3


// implemenet in this format
/* 
1) open source file for Reading
2) create Destination File
3) read the data form source 
4) write the data into Destination
5) close the both

*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define MAX_BUFFER_SIZE 1024

int main(int argc , char *argv[])
{

    if(argc != 3)
    {
        printf("ERROR: Insufficient Arguments\n");
        printf("Used Command as : ./cpx Source_FileName Destination_FileName\n");
        return -1;
    }

    int fdSrc=0 , fdDest=0, iRet=0;
    char Buffer[MAX_BUFFER_SIZE];

    memset(Buffer,'\0',sizeof(Buffer));     // clear bufefr

    // step 1 : Open Source file ---------------------------------------------------------
    fdSrc = open(argv[1], O_RDONLY);        // argv[1] = source file inargument

    if(fdSrc < 0)
    {
        printf("ERROR: Unable to open Source file :%s\n",argv[1]);
        return -1;
    }


    // step 2 : create Destination file ----------------------------------------------------
    fdDest = creat(argv[2], 0777);

     if(fdDest < 0)
    {
        printf("ERROR: Unable to Create Destination file :%s\n",argv[2]);
        return -1;
    }


    // step 3 : Read file from source file ------------------------------------------------
    while(iRet = read(fdSrc,Buffer,sizeof(Buffer)) != 0)
    {
        // step 4 : write Data into Destination file ---------
        write(fdDest,Buffer,iRet);

        memset(Buffer,'\0',sizeof(Buffer));
    }

    printf("Success : Copy Activity Done\n");


    close(fdSrc);
    close(fdDest);

    
    return 0;
}
