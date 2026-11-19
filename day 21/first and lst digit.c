Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/

//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/


#include <stdio.h>

int main()
{
    int n, first, last, temp, digits = 0, divisor = 1, result;

    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }

    first = temp;

    while (digits > 0)
    {
        divisor = divisor * 10;
        digits--;
    }

    result = last * divisor + (n % divisor / 10) * 10 + first;

    printf("%d", result);

    return 0;
}
