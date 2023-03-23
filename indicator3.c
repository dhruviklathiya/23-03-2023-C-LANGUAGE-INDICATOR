#include <stdio.h>
int main() {
    char str[100];
    char *ptr = str;
    int len = 0;
    printf("Enter a string: ");
    gets(str);
    while (*ptr != '\0') {
        len++;
        ptr++;
    }
    printf("Length of the string is %d\n", len);
    return 0;
}
