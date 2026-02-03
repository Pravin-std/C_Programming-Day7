#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];

    int i,j,k;
    int count = 0;

    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(j=0;j<size;j++)
    {
        if(arr[j] == 0)
        {
            count++;
        }
    }

    int d = count % size;

    for(i=0;i<d;i++)
    {
        int temp = arr[0];
        for(k=1;k<size;k++)
        {
            arr[k-1] = arr[k];
            
        }
        arr[size-1] = temp;
    }

    for(j=0;j<size;j++)
    {
        printf("%d ",arr[j]);
    }
}