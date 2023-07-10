#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] )  
{
    if (strcmp(argv[1] , "list") == 0)
    {
        system("ls");
    }

    if (strcmp(argv[1] , "tree" ) == 0)
    {
        system("tree");
    }

    if (strcmp(argv[1] , "fun" ) == 0)
    {
        system("sl");
    }
}

 