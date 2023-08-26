#include <unistd.h>
#include <stdio.h>
int main()
{
    // int pfd[2];
    // pipe(pfd);

    // printf("The value of pfd[0] is %d\n" , pfd[0]);
    // printf("The value of pfd[1] is %d\n" , pfd[1]);

    int pid;
    int pfd[2];

    char aString[20];

    pipe(pfd);

    pid = fork();

    if (pid == 0)
    {
        close(pfd[0]);
        write(pfd[1], "Hello", 5);
    }
    else
    {
        close(pfd[1]);
        read(pfd[0], aString, 5);
    }

    printf("%s\n" , aString);

    // int pfd[2];
    // pipe(pfd);

    // if (fork() == 0)
    // {
    //     close(pfd[1]);
    //     dup2(pfd[0], 0);

    //     close(pfd[0]);
    //     execlp("wc", "wc", (char *) 0);
    // }
    // else
    // {
    //     close(pfd[0]);
    //     dup2(pfd[1], 1);

    //     close(pfd[1]);
    //     execlp("ls", "ls", (char *) 0);
    // }

}