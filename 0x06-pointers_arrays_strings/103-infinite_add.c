#include <stdio.h>
/**
 * infinite_add: ...
 * @n1: ...
 * @n2: ....
 * @r: ...
 * @size_r: ...
 * Return: 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    // check if result buffer is large enough to store the result
    if (strlen(n1) + strlen(n2) + 1 > size_r)
        return 0;

    int carry = 0;
    int i = strlen(n1) - 1;
    int j = strlen(n2) - 1;
    int k = 0;

    // add digits from right to left
    while (i >= 0 || j >= 0)
    {
        int d1 = i >= 0 ? n1[i--] - '0' : 0;
        int d2 = j >= 0 ? n2[j--] - '0' : 0;
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        r[k++] = (sum % 10) + '0';
    }

    // add remaining carry
    if (carry > 0)
        r[k++] = carry + '0';

    // reverse the result
    for (i = 0; i < k / 2; i++)
    {
        char temp = r[i];
        r[i] = r[k - i - 1];
        r[k - i - 1] = temp;
    }

    // null-terminate the result string
    r[k] = '\0';

    return r;
}

