/*
same functionality of uname command - Display the  user 
how to use -   ./unamex     
                argc[0]    

implemenet in this format =
1) call the systemc call uname
1) printf the information from utsname structure
*/

/*
inbuilt structure -
1) open the directory - /proc
2) open all subdirectory whose name integer
3) inside that direcrory open comm file 
4) Display the name inside that file

*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<dirent.h>
#include<sys/utsname.h>


int main(int argc , char *argv[])
{
    

    return 0;
}
