#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// void *print_message(char *ptr)
// {
//     char *message;
//     message = ptr;
//     printf("%s \n", message);
// }


// struct thread_data
// {
//     int x;
//     int y;
//     int z;
// };


// void *print(void *threadArg)
// {
//     struct thread_data *my_data;
//     my_data = (struct thread_data *) threadArg;
//     printf("X: %d, Y: %d, Z: %d\n", my_data->x, my_data->y, my_data->z);
// }


// void *PrintHello()
// {
//     printf("Hello World! It's me\n");
//     // pthread_exit(NULL);
// }

// int myGlobal = 0;

// void *threadFunction()
// {
//     int i, j;
//     for (i = 0; i < 5; i++)
//     {
//         j = myGlobal;
//         j = j + 1;
//         printf(".");
//         fflush(stdout);
//         sleep(1);
//         myGlobal = j;
//     }
// }

int main()
{
    // pthread_t thread1, thread2;
    // char *message1 = "Thread 1";
    // char *message2 = "Thread 2";
    // int return_value1, return_value2;

    // return_value1 = pthread_create(&thread1,NULL, (void *) print_message,  (void *) message1);
    
    // return_value2 = pthread_create(&thread2,NULL, (void *) print_message , (void *) message2);


    // // pthread_create(&thread1,NULL, (void *) print_message,  (void *) message1);
    // // pthread_create(&thread2,NULL, (void *) print_message , (void *) message2);

    // pthread_join( thread1, NULL );
    // pthread_join( thread2, NULL );

    // printf("Return1 value is %d \n" , return_value1);
    // printf("Return2 value is %d \n" , return_value2);


    // exit(0);


    // struct thread_data Omar;
    
    // pthread_t tid;
    // Omar.x = 1;
    // Omar.y = 2;
    // Omar.z = Omar.x + Omar.y;
    // pthread_create(&tid, NULL, print, (void *) &Omar);
    // pthread_join( tid , NULL);


    // pthread_t threads[3];
    // int rc;

    // for(int t=0; t<3; t++)
    // {
    //     printf("In main: creating thread %d\n", t);

    //     rc = pthread_create(&threads[t], NULL, PrintHello, (void *) &t);

    //     if (rc)
    //     {
    //         printf("ERROR; return code from pthread_create() is %d\n", rc);
    //         exit(-1);
    //     }
    // }

    // printf("Main exiting...\n");
    // // pthread_exit(NULL);

    // pthread_t myThread;
    // int i;
    // pthread_create(&myThread, NULL, threadFunction,NULL);
    // for (i = 0; i < 5; i++)
    // {
    //     myGlobal = myGlobal + 1;
    //     printf("o");
    //     fflush(stdout);
    //     sleep(1);
    // }
    // pthread_join(myThread, NULL);
    // printf("\nMy Global Is: %d\n", myGlobal);
    // exit(0);

}

