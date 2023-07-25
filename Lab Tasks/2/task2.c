#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] )  
{
    char str1[20];

    scanf( "%19s" , str1);
    
    while (strcmp(str1 , "exit") != 0)
    {
        if (strcmp(str1 , "list") == 0)
        {
            system("ls");
        }

        if (strcmp(str1  , "tree" ) == 0)
        {
            system("tree");
        }

        if (strcmp(str1 , "fun" ) == 0)
        {
            system("sl");
        }

        scanf( "%19s" , str1);
    }
    
}

 