#include <stdio.h>

#include <stdlib.h>
void quicksort(int *arr, int x, int y)
{
    int i,j,v,temp;
    i=x;
    j=y;
    v=arr[(x+y)/2];
    do
    {
        while (arr[i]<v)
            i++;
        while (v<arr[j])
            j--;
        if (i<=j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    while (i<=j);
    if (x<j)
        quicksort(arr,x,j);
    if (i<y)
        quicksort(arr,i,y);
}
void main(void)
{
    int d,n,s;


    scanf("%d",&d);
    while(d--)
    {
        scanf("%d", &n);
        int *arr = calloc(n, sizeof(int));
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);


        quicksort(arr,0, n-1);

        for(int i=n-1; i>=0; i--)
        {
            printf("%d ",arr[i]);
        }
         printf("\n");
         free(arr);
    }
}
