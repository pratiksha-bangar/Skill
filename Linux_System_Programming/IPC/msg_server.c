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

    id = msgget(key,0666 | IPC_CREAT);

    if(id == -1)
    {
        printf("Unable to allocate Message Queue\n");
        return -1;
    }

    mobj.msg_type= 11;

    strcpy(mobj.data,"Jay ganesh..");


    iRet = msgsnd(id, &mobj,MAX_TEXT,0);    //(unique key, data, size,flag)

    if(iRet == 0)
    {
        printf("Message sent Sucessfully\n");
    }

    return 0;
}
