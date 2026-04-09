// Message Queue - server

#include<stdio.h>
#include<stdlib.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<string.h>

#define MAX_TEXT 512

struct MarvellousMessage
{
    long int msg_type;      // number , message type
    char data[MAX_TEXT];    // data
};

int main()
{
    int id=0;
    int iRet =0;
    key_t key;

    struct MarvellousMessage mobj;

    key =ftok(",", 'a');

    id = msgget(key,0666);

    if(id == -1)
    {
        printf("Unable to allocate Message Queue\n");
        return -1;
    }

    iRet = msgrcv(id,(void *)&mobj, MAX_TEXT,11,IPC_NOWAIT);

    if(iRet > 0)
    {
        printf("Data Received from message:%s\n",mobj.data);
    }

    return 0;
}
