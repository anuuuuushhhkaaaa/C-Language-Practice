#include <stdio.h>

int main() {
    char ch;

    printf("Enter ch : ");
    scanf("%c", &ch);
    
    if (ch >= 'a' && ch <= 'z') {
        printf("lowercase");
    } else {
        printf("not lowercase");
    }

    return 0;
}
