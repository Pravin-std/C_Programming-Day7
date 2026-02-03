#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int i,j;
    int count = 0,count1 = 0;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(j=0;j<size;j++)
    {
        if(arr[j] % 2 == 0)
        {
            count++;
        }else
        {
            count1++;
        }
    }
    printf("Even : %d\n",count);
    printf("Odd : %d",count1);
}