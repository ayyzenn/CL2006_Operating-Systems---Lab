#include <unistd.h>
 
int main(void) 
{
  char *programName = "ls";
  char *args[] = {programName, "-lh", "/home", NULL};
 
  execvp(programName, args);                // Works in the same way as execv() work but, the PATH environment variable is used.
    
  return 0;
}