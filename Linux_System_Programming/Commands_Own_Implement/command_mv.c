// same functionality of mv command - copy of file - move file or rename file
// how to use - ./mvx     source.c  Destination.c
                //argv[0]  argv[1]   argv[2]

                // argc = 3


// implemenet in this format
/* 
1) 

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
        printf("Used Command as : ./mvx Source_Path Destination_Path\n");
        return -1;
    }

   if(rename(argv[1],argv[2])  == -1)
   {
        printf("ERROR : Unable to move \n");
        return -1;
   }

    
    return 0;
}
