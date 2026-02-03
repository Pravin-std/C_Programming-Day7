#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];

    int i,j;

    int count = 1;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int m = arr[0];
    for(j=1;j<size;j++)
    {
        if(arr[j] > m)
        {
            m = arr[j];
            count++;
        }
    }
    printf("%d",count);
}