#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int i,j;
    
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[size-1];
    printf("%d ", max);
    for(j=(size-2);j>=0;j--)
    {
        if(arr[j] > max)
        {
            max = arr[j];
            printf("%d ",max);
        }
    }

}