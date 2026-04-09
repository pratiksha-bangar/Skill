// send signal using kill system call


#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int main()
{
    int pid =0;

    printf("Enter the pid of process:\n");
    scanf("%d\n",&pid);

    kill(pid,SIGUSR1);
    
    return 0;
}
