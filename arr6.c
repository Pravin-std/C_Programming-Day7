#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int i , j;
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    int duplicate = 0;

    for(j=0;j<size;j++)
    {
        duplicate = 0;
    }
    for(int k = 1;k<size;k++)
    {
        if(arr[j]==arr[k])
        {
            printf("%d ",arr[k]);arr7.c
            
        }
    }
    return 0;
    }

