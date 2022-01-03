#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
int main(){
    int i,j,n;
    char * string[MAX][MAX]; char * temp1[MAX],temp2[MAX];
    printf("How many string you want to add?\t");
    scanf("%d",&n);
    for (i=0; i<n; i++){
        printf("Enter %d String:\t",i+1);
        scanf("%s",string[i]);
    }
    printf("The strings are respectively:-\n");
    for (i=0; i<n; i++){
        printf("%s\t",string[i]);
    }
    printf("\nWhich 2 position string you want to swap?\t");
    scanf("%d%d",&i,&j);
    temp1 = *string[i-1];
    temp2 = *string[j-1];
    *string[i-1] = temp2;
    *string[j-1] = temp1;
    printf("After Swapping, strings are respectively:-\n");
    for (i=0; i<n; i++)
{
        printf("%s\t",string[i]);
    }
}
