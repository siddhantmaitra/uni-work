#include<stdio.h>
#include<sys/wait.h>
 main()
 {

  int new_pid;
  int n;
  char *message;

  new_pid=fork();

  switch(new_pid)
  {

   case -1:  printf("\n\n\tError in Creating Process!!!\n\n");
             exit(1);

   case 0:   message="\n\t\tChild Process is Executing\n";
             n=5;
             break;

   default : message="\n\tParent Process is Executing\n";
             n=5;
             break;
   }

   for(; n>0; n--)
   {

      puts(message);
      sleep(1);
   }

  if(new_pid != 0)
  {
     int stat_val;
     int child_pid;
     getchar();
   }
}
