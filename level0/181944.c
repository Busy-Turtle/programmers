#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

	if(a%2)
	{
		printf("%d %s", a, "is odd");
	}
	else
	{
		printf("%d %s", a, "is even");
	}

    return 0;
}
