#include<stdio.h>

void main()
{
   int n, val[10], wt[10], cost[10], i, j, cap, temp, sum = 0, total = 0;
   float diff;
   printf("Enter the number of items: ");
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
      printf("\nEnter the profit of item %d: ", i + 1);
      scanf("%d", &val[i]);
      printf("Enter the weight of item %d: ", i + 1);
      scanf("%d", &wt[i]);
      cost[i] = val[i] / wt[i];
   }
   printf("\nEnter the max capacity of sack: ");
   scanf("%d", &cap);
      for (i = 0; i < n; i++)
      {
         for (j = 0; j < n - i - 1; j++)
         {
            if (cost[j] < cost[j + 1])
            {
            temp = cost[j];
            cost[j] = cost[j + 1];
            cost[j + 1] = temp;
            temp = val[j];
            val[j] = val[j + 1];
            val[j + 1] = temp;
            temp = wt[j];
            wt[j] = wt[j + 1];
            wt[j + 1] = temp;
            }
         }
      }
   printf("\nThe percentages should be: ");
   for (i = 0; i < n; i++)
   {
      if (sum + wt[i] > cap)
      {
         break;
      }
      else
      {
         sum += wt[i];
         total += val[i];
         printf("\n100 %% of %d", val[i]);
      }
   }
   diff = cap - sum;
   total += diff * cost[i];
   printf("\n%f %% of %d", (diff / wt[i]) * 100, val[i]);
   printf("\nThe maximum value that can be stored in sack is: %d", total);
}