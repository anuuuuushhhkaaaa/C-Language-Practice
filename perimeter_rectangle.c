#include <stdio.h>
int main() {
	int a, b, perimeter;
	
	printf("side a = ");
 scanf("%d", &a);
		printf("side b = ");
	scanf("%d", &b); 
	perimeter = 2 * ( a + b );
	printf("perimeter of a rectangle is %d", perimeter);
	return 0;
}
