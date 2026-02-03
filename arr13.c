#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int i,j;
    int count = 0;
    int sum = 0;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int avg = 0;
    
    for(j=0;j<size;j++)
    {
        sum += arr[j];
    }

    avg = sum/size;

    int k;
    for(k=0;k<size;k++)
    {
        if(avg>arr[k])
        {
            count++;
        }
    }
    printf("%d",count);
}