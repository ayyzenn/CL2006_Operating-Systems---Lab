#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int fact(int num)
{
    if(num == 0 || num == 1)
        return 1;
    else 
        return num*fact(num-1);
}

void *factorial(void *p)
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Factorial is: %d\n",fact(num));
}

int main()
{
    pthread_t thread1;

    pthread_create(&thread1,NULL,factorial,NULL);
    pthread_join(thread1,NULL); 

}

