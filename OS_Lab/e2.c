#include <unistd.h>
#include <stdio.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<signal.h>

// int sigCounter = 0;

// int child_id;

// void sigHandler(int sigNum)
// {
//     printf("Signal received is %d\n", sigNum);
//     ++sigCounter;
//     printf("Signals received %d\n", sigCounter);
// }

// void sigHandler(int sigNum)
// {
//     printf("Single received is %d\n" , sigNum);
//     kill(child_id  ,9);
//     sleep(20);
// }


int main()
{
    // int pid = fork();

    // if (pid == 0)           
    // {
    //     printf("Sleeping...\n");
    //     sleep(22);
    // }

    // else
    // {
    //     printf("Killing...\n");
    //     sleep(120);
    //     kill(pid , 9);
        
    // }


    // int child_id = fork();

    // if (child_id == 0)
    // {
    //     // signal(9 , SIG_IGN);
    //     printf("I am child\n");
    //     while (1);

        

    // }
    
    // else
    // {
    //     printf("Parent id is: %d\n" , getpid());
    //     printf("Child id is: %d\n" , child_id);
    //     sleep(10);
    //     kill(child_id , 9);
    //     sleep(10);
    //     wait(NULL);
    // }



    // int child_id = fork();

    // if (child_id != 0)
    // {
    //     printf("I am child\n");
    //     while (1);

    // }
    
    // else
    // {
    //     printf("Parent id is: %d\n" , getpid());
    //     printf("Child id is: %d\n" , child_id);
    //     sleep(10);
    //     kill(child_id , 9);
    //     sleep(10);
    //     wait(NULL);
    // }

    // signal(SIGINT, sigHandler);

    // signal(SIGINT, SIG_IGN);


    // while(1)
    // {
    //     printf("Hello Dears\n");
    //     sleep(1);
    // }



    // child_id= fork();

    // if (child_id == 0)          //child
    // {
    //     printf("Child ID is: %d\n" , getpid());
    //     kill(getppid() , 2);
    //     sleep(20);
    // }
    
    // else
    // {
    //     printf("Parent ID is: %d\n", getpid());
    //     signal(SIGINT , sigHandler);
    //     sleep(20);
    // }

    // kill(SIGHUP)
    return 0;
}


