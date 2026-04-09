#include<iostraem>

int main()
{ 
    int arr[5];            // static memory

    int *ptr = NULL;      // Dynamic memory

    //step 1 - allocate memoery
    ptr = new int[5];

    //step 2 - Use memeory

    // step 3 - Deallocate memory
    delete [] ptr;

    return 0;
}