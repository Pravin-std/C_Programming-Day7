#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];

    int i,j;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(j=0;j<size;j++)
    {
        if(arr[j] < 0)
        {
            arr[j] = 0;
        }
        printf("%d ",arr[j]);
    }
}