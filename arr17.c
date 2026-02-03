#include <stdio.h>
int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];

    int i,j=0;

    for(i=0;i<size;i++)
    {
        scanf("%d", &arr[i]);
    }

    int s = size-1;
    int found = 1;

     while (j < s)
    {
        if (arr[j] != arr[s])
        {
            found = 0;
            break;
        }
        j++;
        s--;
    }
    printf("%s",(found) ? "Yes" : "No");
}