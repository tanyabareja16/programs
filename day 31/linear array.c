
#include <stdio.h>

int main()
{
    int a[100], n, i, key, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++)
    {a
#include <stdio.h>

int main()
{
    int a[100], n, i, key, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear search
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("-1");
    }

    return 0;
}

        if(a[i] == key)
        {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("-1");
    }

    return 0;
}
