#include <stdio.h>

int main() {
    int a ,b , c , average;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("enter c : ");
    scanf("%d", &c);
 average = (a + b + c) / 3 ;
 printf("average = %d ", average);
    return 0;
}

