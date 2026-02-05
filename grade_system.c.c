#include <stdio.h>

int main() {
    int num1, num2, num3, marks ;
    printf("enter num1 = ");
    scanf("%d", &num1);
    printf("enter num2 = ");
    scanf("%d", &num2);
    printf("enter num3 = ");
    scanf("%d", &num3);
    marks = num1 + num2 + num3;
    if ( marks >= 90 && marks <= 100 )
    { 
         printf("A");
    }
    if ( marks >= 80 && marks <= 90 )
    { 
        printf ("B");
    }
    if ( marks >= 70 && marks <= 80 )
     { 
        printf ("C");
}
if ( marks >= 60 && marks <= 70 )
     { 
        printf ("D");
}
if ( marks < 70 )
     { 
        printf ("F");
}
    return 0;
}

