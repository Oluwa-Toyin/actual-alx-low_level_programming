#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0, i, j;
    int len1 = strlen(n1), len2 = strlen(n2);
    int max_len = len1 > len2 ? len1 : len2;
    if (max_len >= size_r) return 0;  // check buffer size

    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
    {
        int digit1 = i < 0 ? 0 : n1[i] - '0';
        int digit2 = j < 0 ? 0 : n2[j] - '0';
        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        int digit_sum = sum % 10;
        r[max_len--] = digit_sum + '0';
    }

    return &r[max_len + 1];
}
