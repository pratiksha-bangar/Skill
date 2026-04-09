
#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void MarvellousHandler(int no)
{
    if( no == SIGUSR1)
    {
        printf("Marvellous Message - SIGUSER1 arrived\n");
    }
    else if(no == SIGINT)
    {
         printf("Marvellous Message - SIGINT arrived\n");
    }
}

int main()
{
    printf("PID is :%d\n",getpid());

    signal(SIGUSR1,MarvellousHandler);
    signal(SIGINT,MarvellousHandler);

    while(1)
    {
        sleep(1);
    }

    return 0;
}
