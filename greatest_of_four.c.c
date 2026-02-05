#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("enter a = ");
    scanf("%d", &a);
    printf("enter b = ");
    scanf("%d", &b);
     printf("enter c = ");
    scanf("%d", &c);
     printf("enter d = ");
    scanf("%d", &d);
    if ( a >= b && a >= c && a >=d)
    { 
         printf("a is greatest");
    }
    else if ( b >= a && b >= c && b >=d)
    { 
        printf ("b is greatest");
    }
     else if ( c >= a && c >= b && c >=d)
    { 
        printf ("c is greatest");
    }
     else if ( d >= a && d >= c && d >=b)
    { 
        printf ("d is greatest");
    }
    return 0;
}

