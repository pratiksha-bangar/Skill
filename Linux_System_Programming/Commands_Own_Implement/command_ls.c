// same functionality of ls command -list of all files
// how to use -   ./ls 
                //argc[0]


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
        printf("%s\n",dobj->d_name);
    }

    

    closedir(dp);
    
    return 0;
}
