
#include <stdio.h>

int main()
{
    int a[100], n, i, max, min;

    printf("Enter array size: ");
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    // Find maximum and minimum
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}
