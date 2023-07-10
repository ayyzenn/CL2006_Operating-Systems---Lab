#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] )  
{
    char str[100];
    scanf ("%[^\n]" , str);

    while ((getchar()) != '\n');

    // printf("%s\n" , str);
    int chk = strcmp(str , "exit");

    while (chk != 0)
    {
        if (strcmp(str , "list all") == 0)
        {
            system("ls -a");
        }

        if (strcmp(str  , "python version" ) == 0)
        {
            system("python3 --version");
        }

        if (strcmp(str , "fun" ) == 0)
        {
            system("sl");
        }

        scanf ("%[^\n]" , str);
        
        while ((getchar()) != '\n');

        chk = strcmp(str , "exit");
    }
     
}
 
