#include<stdio.h>
void ShellSort(int a[], int n)
{
    int i, j, increment, tmp;
    for(increment = n/2; increment > 0; increment /= 2)
    {
        for(i = increment; i < n; i++)
        {
            tmp = a[i];
            for(j = i; j >= increment; j -= increment)
            {
                if(tmp < a[j-increment])
                    a[j] = a[j-increment];
                else
                    break;
            }
            a[j] = tmp;
        }
    }
}

int main()
{
    int i, n, a[10],increment, tmp,j;
    printf("Enter the number of elements :: ");
    scanf("%d",&n);
    printf("Enter the elements :: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    //ShellSort(a,n);
    for(increment = n/2; increment > 0; increment /= 2)
    {
        for(j = increment; j < n; j++)
        {
            tmp = a[j];
            for(i=j-increment;i>=0 && tmp<a[i];i=i-increment)
            a[i+increment] = a[i];
        a[i+increment] = tmp;
        }
    }
    printf("The sorted elements are ::  ");
    for(i = 0; i < n; i++)
        printf("%d  ",a[i]);
    printf("\n");
    return 0;
}
