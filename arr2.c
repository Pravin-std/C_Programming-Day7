#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int x;
    scanf("%d", &x);
    int i,j;
    int count = 0;

    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(j=0;j<size;j++)
    {
        if(x==arr[j])
        {
            count++;
        }
    }
    printf("%d",count);
}