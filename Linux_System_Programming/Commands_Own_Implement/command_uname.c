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
    
    struct utsname obj;

    int iRet=0;

    iRet = uname(&obj);


    if(iRet == -1)
    {
        printf("ERROR :Unable to fetch system call information\n");
        return -1;
    }

    printf("Operating system name :%s\n",obj.sysname);
    printf("Node name :%s\n",obj.nodename);
    printf("Operating System Version:%s\n",obj.release);





    return 0;
}
