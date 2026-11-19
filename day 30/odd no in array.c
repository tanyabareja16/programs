
#include <stdio.h>

int main()
{
    int a[100], n, i, even = 0, odd = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Count even and odd numbers
    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Even=%d, Odd=%d", even, odd);

    return 0;
}
