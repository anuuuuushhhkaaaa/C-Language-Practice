#include <stdio.h>

int main() {
    char ch;
    printf("enter ch = ");
    scanf("%c", &ch);
    if ( ch >= '0' && ch <= '9' )
    { 
         printf("character is digit");
    }
    else 
    {
        printf("character is not digit");
    }
    
    return 0;
}

