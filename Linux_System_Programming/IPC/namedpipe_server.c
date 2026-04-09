//Named pipe server - 
// named pipe entry in hard disk

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>

int main()
{
    int fd =0;
    int iRet=0;

    iRet = mkfifo("/tmp/marvellous",0666);

    if(iRet == -1)
    {
        printf("unable to craete Named pipe\n");
        return -1;
    }


    fd = open("/tmp/marvellous", O_WRONLY);

    if(fd == -1)
    {
        printf("Unable to open named Pipe\n");
        return -1;
    }

    write(fd ,"Jay Ganesh", 10);

    printf("Data gets Sucessfully writen into pipe by the server:\n");

    close(fd);

    unlink("/tmp/marvellous");
    
    return 0;
}
