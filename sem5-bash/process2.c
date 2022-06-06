#include<stdio.h>
void main()
{
  int new_pid;

  new_pid=fork();

  printf("\n\n\tForking Process Starting....\n");

  if (new_pid==0)
  {
    printf("\n\t\tChild Process is Executing with pid = %d & ppid = %d \n\n",getpid(),getppid());
  }
  else
  {
    printf("\n\t\tParent Process is Executing with pid = %d & ppid = %d\n\n\n",getpid(),getppid());
  }
}
