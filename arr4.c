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

    for(j=size-1;j>=0;j--)
    {
        printf("%d ",arr[j]);
    }
}