//Program  to insert an element in an array at a specific position

#include<stdio.h>

void main()
{
    int n,value,position,i;
    
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n+2];
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
	    
        scanf("%d", &array[i]);

    printf("\nThe given array is:");
    for(i=0;i<n;i++)
	    
        printf(" %d ", array[i]);
    
    printf("\nEnter the position for the element to be inserted: ");
    scanf("%d",&position);
    printf("\nEnter the value of the element to be inserted: ");
    scanf("%d",&value);
    
    for(i=n;i>=position;i--)
        array[i+1]=array[i];
    
    array[position]=value;
    printf("\nThe new array is= ");
    for(i=0;i<=n;i++)
	    
        printf(" %d ", array[i]);

    	     
}
