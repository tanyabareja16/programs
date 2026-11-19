
#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Print array elements
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
