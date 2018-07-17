#include <stdio.h>
#include <unistd.h>
int main(int argc, char const *argv[]) {
  int pid;
  printf("am the parent process with pid %d and ppid %d\n",getpid(),getppid() );
  pid = fork();
  if (pid > 0)
  {
    printf("im the parent process with pid this is happening after a fork call() pid %d and ppid %d \n",getpid(),getppid() );
    printf(" my child is of pid %d\n",pid );
  }
  else if (pid == 0)
  {
    printf(" am the child process with pid %d\n",getpid() );
  }
  else
  {
    perror("forkError");
  }
  return 0;
}
