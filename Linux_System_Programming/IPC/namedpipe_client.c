//Named pipe client - 
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
    char Arr[100] ={'\0'};

    fd = open("/tmp/marvellous", O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open named Pipe\n");
        return -1;
    }

    read(fd ,Arr,3);

    printf("Data gets Sucessfully read from pipe by the client:\n");
    printf("Data is:%s\n",Arr);

    close(fd);

    ////////////////////////////////////////

    fd = open("/tmp/marvellous", O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open named Pipe\n");
        return -1;
    }

    read(fd ,Arr,7);

    printf("Data gets Sucessfully read from pipe by the client:\n");
    printf("Data is:%s\n",Arr);

    close(fd);
    
    return 0;
}
