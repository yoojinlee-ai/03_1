#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;
    printf("input an alphabet: ");
    scanf("%c", &c);

    char next_char = c + 1;

    printf("The next character is %c\n", next_char);  // ���ڷ� ���
    return 0;
}

