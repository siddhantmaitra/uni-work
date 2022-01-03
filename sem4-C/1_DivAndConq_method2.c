#include<stdio.h>
#include<stdio.h>
int max, min;
int a[20];
void maxmin(int l, int h)
{
 int max1, min1, mid;
 if(l==h)
 {
  max = min = a[l];
 }
 else
 {
  if(l == h-1)
  {
   if(a[l] <a[h])
   {
    max = a[h];
    min = a[l];
   }
   else
   {
    max = a[l];
    min = a[h];
   }
  }
  else
  {
   mid = (l+h)/2;
   maxmin(l, mid);
   max1 = max; min1 = min;
   maxmin(mid+1, h);
   if(max <max1)
    max = max1;
   if(min > min1)
    min = min1;
  }
 }
}
int main ()
{
 int k, num;
 printf ("\nEnter the size of the array : ");
 scanf ("%d",&num);
 printf ("Enter the numbers : \n");
 for (k=1;k<=num;k++)
  scanf ("%d",&a[k]);

 max = a[0];
 min = a[0];
 maxmin(1, num);
 printf ("Minimum element in an array : %d\n", min);
 printf ("Maximum element in an array : %d\n", max);
 return 0;
}