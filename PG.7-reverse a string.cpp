#include <stdio.h>
void reversestring();
int main() {
    printf("Enter a string: ");
    reversestring();
    return 0;
}

void reversestring() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reversestring();
        printf("%c", c);
    }
}

