#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];

    int i,j;
    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int max2 = arr[0];
    for(j=1;j<size;j++)
    {
        if(arr[j] > max)
        {
            max2 = max;
            max = arr[j];
        }else if(arr[j] < max && arr[j] > max2)
        {
            max2 = arr[j];
        }
    }
    printf("Largest = %d and Second Largest = %d",max,max2);
}