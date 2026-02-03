#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int i,j;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = -1;
    for(j=size-1;j>=0;j--)
    {
        if(arr[j] > arr[j-1])
        {
            arr[j-1] = arr[j];
        }else{
            arr[j-size-1] = arr[j];
        } 
    }
    //printf("%d ",max);
    for(int k = 1;k<size;k++)
    {
        printf("%d ",arr[k]);
    }
printf("%d ",max);
}