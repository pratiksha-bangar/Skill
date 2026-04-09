// client
#include<stdio.h>
#include<sys/shm.h>
#include<sys/ipc.h>

int main()
{
    int id =0;
    char *ptr = NULL;

    key_t key;                                      // generate unique key
    key = ftok(".",'p');  

    id = shmget(key, 1024,0666); // (key,size,permission) 0666 -read write

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

    printf("%s\n",ptr);

    shmdt(ptr);
    

    return 0;
}
