#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(void)
{
    printf("Saad Ahmad aka ayyzenn\n");
    // system("mkdir test");
    // system("ls");
    // system("rm test -r");


    printf("Child ID: %d\n",getpid());

    printf("Parent ID: %d\n" , getppid());

    // sleep(100);

    return 0;
}
