#include <stdio.h>
#include <stdlib.h>
void merge(int a[],int i1,int j1,int i2,int j2)
{
    int i=i1,j=i2,temp[1000]={0},k=0;
    while(i<=j1 && j<=j2)
    {
        if(a[i]<a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while(i<=j1)
        temp[k++] = a[i++];
    while(j<=j2)
        temp[k++] = a[j++];
    for(i=i1,j=0;i<=j2;)
        a[i++] = temp[j++];
}
void mergesort(int a[],int l,int h)
{
    int mid;
    if(l<h)
    {
        mid = (l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,mid+1,h);
    }
}
int main()
{
    int n,i,j,min=0,a[1000];
    printf("Enter range of array : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Entered array:");
    for(i=0;i<n;i++)
    {
	    printf("%d, ",a[i]);
    }
    mergesort(a,0,n-1);
    printf("\nSorted Array : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}