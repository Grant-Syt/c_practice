#include <stdio.h>
#include <string.h>

int main() {
    
    char str[] = "hello world";

    printf("%s\n", str);

    char null_char = str[sizeof(str) - 1];

    printf("%s\n", null_char);

    printf("array len: %d\n", sizeof(str));

    printf("string len: %d", strlen(str));
    
    return 0;
}