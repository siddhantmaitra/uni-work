#include <stdio.h>
int binarySearch(int [], int, int, int);
int main()
{
  int c, first, last, n, search, a[100], index;
  printf("Enter number of elements:");
  scanf("%d", &n);
  printf("Enter %d integers in ascending order:\n", n);
  for (c = 0; c < n; c++)
     scanf("%d", &a[c]); 
  printf("Entered array:");
   for(c=0;c<n;c++)
    {	    printf("%d, ",a[c]);
    }
  printf("\nEnter value to find\n");
  scanf("%d", &search);
  first = 0;
  last = n - 1;
  index = binarySearch(a, first, last, search);
  if (index == -1)
    printf("Not found! %d isn't present in the list.\n", search);
  else
    printf("%d is present at location %d.\n", search, index + 1);
  return 0;
}
int binarySearch(int a[], int s, int e, int f) 
{
  int mid;
  if (s > e)
     return -1;
  mid = (s + e)/2;
  if (a[mid] == f) 
    return mid;
  else if (f > a[mid])
     return binarySearch(a, mid+1, e, f);
  else
      return binarySearch(a, s, mid-1, f);
}