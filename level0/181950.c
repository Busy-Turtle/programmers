#include <stdio.h>
#include <string.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a;
    scanf("%s %d", s1, &a);

	int s1_len = strlen(s1);

	char* answer = (char*)malloc(sizeof(char) * (s1_len * a + 1));

	for(int i = 0; i < a; i++)
	{
		strcat(answer, s1);
	}

	printf("%s", answer);

    return 0;
}
