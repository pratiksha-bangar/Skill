// create multiple thread

#include<stdio.h>
#include<pthread.h>

void * Demo(void *p)
{
    printf("Inside Demo thread\n");
    return NULL;
}

void * Hello(void *p)
{
    printf("Inside Hello thread\n");
    return NULL;
}

int main()
{
    pthread_t TID1,TID2;
    int iRet=0;

    printf("Main Thread started\n");

    // -------------------------- THREAD 1
    iRet = pthread_create(
                            &TID1,       // thread id
                            NULL,       // thread attributes
                            Demo,       // thread callback function
                            NULL        // parameters for the callback function
                        );
    
    if(iRet ==0)
    {
        printf("Demo Thread gets created successfully:%lu\n",(unsigned long)TID1);
    }



    // --------------------------------- THREAD 2
    iRet = pthread_create(
                            &TID2,       // thread id
                            NULL,       // thread attributes
                            Hello,       // thread callback function
                            NULL        // parameters for the callback function
                        );
    
    if(iRet ==0)
    {
        printf("Hello Thread gets created successfully:%lu\n",(unsigned long)TID2);
    }


    
    //------------------------------------- join for both
    pthread_join(TID1,NULL);
    pthread_join(TID2,NULL);


    printf("End of main thread\n");
    return 0;
}
