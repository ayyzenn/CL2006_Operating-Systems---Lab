#include <unistd.h>
 
int main(void) 
{
  char *binaryPath = "/bin/ls";         // take the executable binary file.
  char *arg1 = "-lh";                   // arguments that we want to pass to the executable followed by NULL.
  char *arg2 = "/home/ayyzenn/Desktop";
 
  execl(binaryPath, binaryPath, arg1, arg2, NULL);
 
  return 0;
}