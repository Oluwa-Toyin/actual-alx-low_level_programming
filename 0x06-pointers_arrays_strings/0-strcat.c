#include "main.h"
#include <stdio.h>

/* This is supposed to concatenate two strings
 * main starts the program
 * It ought to return 0 if there is no error
 */

int main (void)
{
	char *_strcat(char *dest, char *src) {
    char *temp = dest;
    while (*dest) {
        dest++;
    }
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0';
    return temp;
}

