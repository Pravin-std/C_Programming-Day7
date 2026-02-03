#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];

    int i,j,k;

    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    int min;
    int found = 0;

    for(k=0;k<size;k++)
    {
        if(arr[k] > 0)
        {
            min = arr[k];
        }
    }

    for(j=1;j<size;j++)
    {
    if(arr[j] > 0){
        if(arr[j] < min)
        {
            min = arr[j];
            found = 1;
        }
    }
    }
    if(!found)
    {
        printf("No Positive");
    }else
    {
        printf("%d",min);
    }
}