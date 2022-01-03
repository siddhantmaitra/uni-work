
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void swap2(char *str1, char *str2)
{
  char *temp = (char *)malloc((strlen(str1) + 1) * sizeof(char));
  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
  free(temp);
}

int main()
{
  char str1[10] = "Kolkata";
  char str2[10] = "Mumbai";
  swap2(str1, str2);
  printf("City1 is %s, City2 is %s", str1, str2);
  getchar();
  return 0;
}

