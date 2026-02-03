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
    int flag = 0;
    for(j=1;j<size;j++)
        {
           if(arr[j] > max)
           {
            max = arr[j];
           }else
           {
            flag = 1;
           }
        }
        if(flag == 1)
        {
            printf("no");
        }else
        {
            printf("Yes");
        }
}