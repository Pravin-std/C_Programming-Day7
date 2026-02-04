#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];

    int i,j;

    int count = 0;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(j=1;j<size-1;j++)
    {
        if(arr[j] > arr[j-1] && arr[j] > arr[j+1])
        {
            count++;
        }
    }
    printf("%d",count);
}