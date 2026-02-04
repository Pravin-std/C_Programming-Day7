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

    int close = 0;

    for(j=0;j<size;j++)
    {
        if((close<arr[j] || arr[j] == -1) && arr[j]<2)
        {
        printf("%d",arr[j]);
        }
    }
}