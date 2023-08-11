#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<time.h>
#include<unistd.h>

char* get_timeStamp()
{
    time_t now = time(NULL);
    return asctime(localtime(&now));
}

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("Error: Run like this: ");
        printf("%6s name-of-existing-file\n",
        argv[0]);
        return 1;
    }
    char *filename = argv[1];

    char *timeStamp = get_timeStamp();

    int fd = open(filename, O_WRONLY |O_APPEND |O_CREAT, 0666);

    size_t length = strlen(timeStamp);

    write(fd, timeStamp, length);
    close(fd);
    return 0;
}