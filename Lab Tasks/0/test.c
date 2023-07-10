#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include<signal.h>
int main(void)
{
    // int i;
    // printf("Process PID %6d \t PPID %6d \n",getpid(), getppid());
    // for (i = 0; i<3; ++i)
    // {
    //     if (fork()==0)
    //     printf("Process PID %6d \t PPID %6d \n", getpid(), getppid());
    // }

    // printf("Hello\n");
    // fflush(stdout);
    // fork();

    // printf("Hi\n");
    // fflush(stdout);

    // fork();
    // printf("New\n");
    // fflush(stdout);

    // int p;
    // p = fork();
    // printf("Job Done\n");

    // printf("Value of P is %d\n", p);


    // int p;
    // printf("Original Process, pid = %d\n", getpid() );

    // p = fork();

    // if (p == 0)
    // {
    //     printf("Child PID = %d, PPID = %d\n",getpid(), getppid() );
    //     sleep(120);
    // }
    // else
    // {
    //     printf("Parent PID = %d, Child ID = %d\n", getpid(), p);
    //     sleep(120);
    // }

    // int p;

    // p = fork();

    // p = fork();

    // if (p != 0)
    // {
    //     p = fork();
    // }    

    // printf("Child PID = %d, PPID = %d\n",getpid(), getppid() );
    // sleep(10);

    // int p;
    // char *arg[] = {"/usr/bin/ls", 0};
    // p = fork();
    // if (p == 0)
    // {
    //     printf("Child Process\n");
    //     execv(arg[0], arg);
    //     printf("Child Process\n");
    // }
    // else
    // {
    //     printf("Parent Process\n");
    //     sleep(10);
    // }   

    // for (int i = 10; i >= 0; i--)
    // {
    //     sleep(1);
    //     printf("Number is: %d\n", i);
    // }
    // int num;
    // void anotherexit();
    // printf("Enter a number: ");
    // scanf("%i" , &num);

    // if (num > 25)
    // {
    //     printf("exit 1\n");
    //     exit(1);
    // }
    // else
    // {
    //     anotherexit();
    // }


    // void f1(void), f2(void), f3(void);
    // atexit(f1);
    // atexit(f2);
    // atexit(f3);
    // printf("Getting ready to exit\n");
    // exit(0);

    printf("Hello");
    kill(getpid(), 9);
    printf("Goodbye");
    
    return 0;
}

// void anotherexit()
// {
//     printf("exit 2\n");
//     exit(1);
// }


// void f1(void) 
// {   
//     printf("In f1\n");
//     abort();
// }
// void f2(void) 
// {
//     printf("In f2\n");
//     abort();
// }
// void f3(void) 
// {
//     printf("In f3\n");
//     abort();
// }
