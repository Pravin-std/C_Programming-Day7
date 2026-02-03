#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);
    int arr[size];
    int i,j,k;

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum;
    scanf("%d", &sum);
    int found = 0;

    for (j = 0; j < size; j++)
    {
    for (k = j + 1; k < size; k++)
    {
    if (arr[j] + arr[k] == sum)
        {
            printf("%d %d", arr[j], arr[k]);
            found = 1;
            break;
        }
        }
        if (found)
            break;
    }
    if (!found)
    {
        printf("No pair");
    }
}
