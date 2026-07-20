#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
/* #include < */

int main() {
  int pid = fork();
  if (pid > 0) {
    printf("parent: child=%d\n", pid);
    pid = wait((int *) 0);
  } else if(pid == 0) {
    printf("child: exiting\n");
  } else {
    printf("fork error\n");
  }
}
