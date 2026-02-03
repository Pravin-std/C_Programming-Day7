#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int i,j;

    for(i=0;i<size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(j=0;j<size-1;j++)
    {
        sum += arr[j];
    }
    int sum1= 0;
    for(int k = 1;k<=size;k++)
    {
        sum1 += k;
    }
    int miss = sum1 - sum;
    printf("%d",miss);
}