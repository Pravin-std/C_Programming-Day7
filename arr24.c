#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);

    int arr[size];

    int i,j,k;

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int count = 0;

    for(j=0;j<size;j++)
    {
        for(k=j+1;k<size;k++)
        {
            if(arr[j]==arr[k])
            {
                //printf("No");
                
                count++;
                
            }
        }
    }
    if(count>0)
    {
        printf("No");
    }else
    {
        printf("Yes");
    }
    
}