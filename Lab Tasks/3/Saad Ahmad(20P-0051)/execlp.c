#include <unistd.h>
 
int main(void) 
{
  char *programName = "ls";                 // does not use the PATH environment variable
  char *arg1 = "-lh";
  char *arg2 = "/home/ayyzenn/Desktop";
 
  execlp(programName, programName, arg1, arg2, NULL);
 
  return 0;
}