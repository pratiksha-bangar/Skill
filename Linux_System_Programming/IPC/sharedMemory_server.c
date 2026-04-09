// server - create a memory page
// Data is accessible to client - generatde u unique key using ftok


#include<stdio.h>
#include<sys/shm.h>

int main()
{
    int id =0;
    char *ptr = NULL;

    key_t key;                                      // generate unique key
    key = ftok(".",'p');                             //(file name , key);

    id = shmget(key, 1024,0666 | IPC_CREAT);         // (key,size,permission) 0666 -read write

    if(id == -1)
    {
        printf("falied to allocate shared memory\n");
        return -1;
    }

    ptr = shmat(id,NULL,0); 

    if(ptr ==(char *) -1)
    {
        printf("Unable to attached memory\n");
        return -1;
    }

    *ptr = 'L';
    ptr++;

    *ptr = 'S';
    ptr++;

    *ptr = 'P';
    ptr++;

    *ptr ='\0';


    shmdt(ptr);

    return 0;
}
