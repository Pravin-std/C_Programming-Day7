#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];

    int i,j,k;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    int min = arr[0];
    for(j=1;j<size;j++)
    {
        if(arr[j] < min)
        {
            min = arr[j];
        }
    }

    int max = arr[min+1];
    for(k=min+1;k<size;k++)
    {
        if(arr[k] > max)
        {
            max = arr[k];
        }
    }
    
    int current = max - min;
    printf("%d",(current > 0)? current : -1);

}