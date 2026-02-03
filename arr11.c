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

    int rsum = 0,lsum = 0;
    for(j=0;j<size/2;j++)
    {
        rsum +=arr[j];
    }
    for(int k =(size/2)+1;k<size;k++)
    {
        lsum +=arr[k];
    }
    int temp = 0;
    if(lsum==rsum)
    {
         temp = size/2;
    }else
    {
        temp = -1;
    }
    printf("%d",temp);

   
}