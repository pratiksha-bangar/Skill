// unnamed pipe 
//input is array of size 2 - first for writing fd[1] and second for reading fd[0]

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main()
{
    int pipefd[2]= {0,0};
    int iRet =0;
    char Arr[100]={'\0'};

    pipe(pipefd);

    iRet =fork();

    if(iRet == 0)       // child
    {
        close(pipefd[0]);
        write(pipefd[1],"Jay Ganesh",10);
        exit(0);
    }
    else                // parent 
    {
        close(pipefd[1]);
        read(pipefd[0],Arr,10);
        printf("Data From pipe is :%s\n",Arr);
    }

    return 0;
}
