#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int k;
    scanf("%d", &k);
    int i,j;

    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }


    int d = k % size;


    for(int k = 0;k<d;k++)
    {
    int temp = arr[0];
    for(j=1;j<size;j++)
    {
        arr[j-1] = arr[j];
    }
    arr[size-1] = temp;
}


for(int i =0;i<size;i++)
{
    printf("%d ",arr[i]);
}
}