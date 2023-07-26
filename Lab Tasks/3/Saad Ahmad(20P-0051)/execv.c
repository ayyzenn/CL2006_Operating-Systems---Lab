#include <unistd.h>
 
int main(void) 
{
  char *binaryPath = "/bin/ls";
  char *args[] = {binaryPath, "-lh", "/home/ayyzenn/Desktop", NULL};
 
  execv(binaryPath, args);                  // We can pass all the parameters in a NULL terminated array argv.
 
  return 0;
}