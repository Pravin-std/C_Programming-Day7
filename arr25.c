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
    int max1 = arr[0];
    for(j=1;j<size;j++)
    {
        if(arr[j] > max1)
        {
            max1 = arr[j];
        }
    }
    int max2 = arr[0];
    for(k=1;k<=size/2;k++){
        if(arr[k] > max2)
        {
            max2 = arr[k];
        }
    }
    //printf("%d %d",max1,max2);
    int n,m;
    int min1 = arr[0];
    for(n=1;n<size;n++)
    {
        if(arr[n] < min1)
        {
            min1 = arr[n];
        }
    }
    int min2 = arr[0];
    for(m=1;m<size/2;m++)
    {
        if(arr[m] >= min2)
        {
            min2 = arr[m];
        }
    }

    printf("%d", (min1 * min2 > max1 * max2) ? (min1 * min2) : (max1 * max2));

}