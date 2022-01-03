//Q2:Delete an element from array
#include<stdio.h>

int deleteElement(int arr[], int n, int x) 
{ 
   // Search x in array 
   int i; 
   for (i=0; i<n; i++) 
      if (arr[i] == x) 
         break; 
  
   // If x found in array 
   if (i < n) 
   { 
     // reduce size of array and move all 
     // elements on space ahead 
     n = n - 1; 
     for (int j=i; j<n; j++) 
        arr[j] = arr[j+1]; 
   } 
  
   return n; 
} 

void main()
{
    int n,value,position,i,num;
    
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
	    
        scanf("%d", &array[i]);

    printf("\nThe given array is:");
    for(i=0;i<n;i++)
	    
        printf(" %d ", array[i]);
    printf("\nEnter the  the element to be deleted: ");
    scanf("%d",&value); 
    deleteElement(array,n,value);

    printf("\nThe new array is:");
    for(i=0;i<n-1;i++)
	    
        printf(" %d ", array[i]);
}