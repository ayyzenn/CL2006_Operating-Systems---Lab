#include <unistd.h>
 
int main(void) 
{
  char *binaryPath = "/bin/bash";
  char *arg1 = "-c";
  char *arg2 = "echo \"Visit $HOSTNAME : $PORT from your browser.\"";
  char *const env[] = {"HOSTNAME=www.google.com", "PORT=8080", NULL};
 
  execle(binaryPath, binaryPath,arg1, arg2, NULL, env);             // Works just like execl() but we can provide our own environment variables along with it.
 
  return 0;
}