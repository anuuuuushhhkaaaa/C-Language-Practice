#include <stdio.h>

int main() {
    float income, annual_income;
    printf("enter income = ");
    scanf("%f", &income);
   if ( income <= 2.5)
    { 
         printf("no tax");
}
else if ( income > 2.5 && income <= 5)
    { printf("5%% tax");
}
else if ( income > 5 && income <= 10 )
{
    printf("20%% tax");
}
else if ( income > 10)
{
    printf("30%% tax");
}
return 0;
}

