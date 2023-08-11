#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<time.h>
#include<unistd.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Error: Run like this: ");
        printf("%6s name-of-existing-file\n",
        argv[0]);
        return 1;
    }
    char *path = argv[1];
    int fd = open(path, O_RDONLY , 0777);

    if (fd == -1)
    {
        int fd = open(path, O_WRONLY | O_RDONLY | O_CREAT , 0777);
        printf("Creating file...\n");
        sleep(1);
        printf("Done\n");
    }

    if (fd == 3)
    {
        char buffer[200];
        read(fd, buffer, sizeof(buffer)-1);
        // printf("Contents of File are:\n");
        printf("%s\n", buffer);
    }
    
    close(fd);
    return 0;
}