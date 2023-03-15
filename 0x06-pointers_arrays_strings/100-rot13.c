#include "main.h"
#include <stdio.h>

/* main starts the program
 * 0 is returned if there is no error
 */

int main(void)
{
	char *rot13(char *str) {
    char *ptr = str;
    int i;

    while (*ptr != '\0') {
        if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M')) {
            *ptr = *ptr + 13;
        } else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z')) {
            *ptr = *ptr - 13;
        }
        ptr++;
    }

    return str;
}

