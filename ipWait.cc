#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
int main(int argc, char const *argv[]) {
  int pid,childpid,status ;
  pid = fork();
  if (pid == 0)
  {
    printf(" im the child with pid %d and ppid %d \n",getpid(),getppid() );
    printf(" child sleeeping for ten seconds \n");
    sleep(10);
    exit(12);
  }
  else if (pid > 0)
  {
    printf(" am the parent process pid %d and ppid %d \n",getpid(),getppid() );
    //waiting for child to terminate
    childpid = wait(&status);
    printf("a child of pid %d has terminated with status %d  \n",childpid,status);
  }
  else
  {
    perror("forkError");
  }
  return 0;
}
