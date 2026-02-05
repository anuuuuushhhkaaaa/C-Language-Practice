#include <stdio.h>

int main() {
    int maths, science, lang, marks;
    float percentage;
    printf("enter maths = ");
    scanf("%d", &maths);
    printf("enter science = ");
    scanf("%d", &science);
    printf("enter lang = ");
    scanf("%d", &lang);
    marks = maths+ science+ lang;
    percentage = (marks/ 300.0) * 100; 
    if ( maths >= 33 && science >= 33 && lang >=33 && percentage >= 40 )
    { 
         printf("pass");
}
else {
    printf("fail");
}
    return 0;
}

