 /*
 
 same functionality of ls command -list of all files
 
1) ls -i = display files with inodes
2) ls -a = display all files ( . and ..)

how to use -   ./ls 
                argc[0]

*/


/* 
implemenet in this format =
1) open the current directory
2) read all entryies form that directory
3) print the name of files 
4) close the directory

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>


int main(int argc , char *argv[])
{
    int option =0;      // option 1 = ls -a
                        // option 2 = ls -i

    // option =argc   (if use this then not need to write below if conditions)

    if(argc == 1)
    {
        option =1;
    }
    else if(strcmp(argv[1], "-a") == 0)
    {
        option =1;
    }
    else if(strcmp(argv[1], "-i") == 0)
    {
        option = 2;
    }
    else
    {
        printf("ERROR : There is no such option\n");
        return -1;
    }


    char *path = ".";
    DIR *dp = NULL;
    struct dirent *dobj;

    // step 1 : Open Directory ------------------------------------------------------------------
    dp = opendir(path);

    if(dp == NULL)
    {
        printf("ERROR : Unable to open directory\n");
        return -1;
    }


    // step 2: Display the list of files -------------------------------------------------------------
    while((dobj = readdir(dp)) != NULL)
    {
        if(option == 1)
        {
            printf("%s\n",dobj->d_name);                    // display list with . and ..
        }
        else if(option == 2)
        {
            printf("%ld\t%s\n",dobj->d_ino,dobj->d_name);   // display files with inode
        }
        
    }

    

    closedir(dp);
    
    return 0;
}
