#include <stdio.h>
int main()
{
  int ppid,pid;
  ppid= getppid();
  pid= getpid();
  printf("\n\tParent Process ID is: %d\n\n",ppid);
  printf("\n\tThe Process ID is: %d\n\n",pid);
}
