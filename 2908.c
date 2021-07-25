#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s0[2];
	char s1[4];
	char s2[4];

	scanf("%s %s", s1, s2);

	s0[0] = s1[2];
	s1[2] = s1[0];
	s1[0] = s0[0];

	s0[0] = s2[2];
	s2[2] = s2[0];
	s2[0] = s0[0];
	if (strcmp(s1, s2) == 1)
		printf("%s", s1);
	else
		printf("%s", s2);

	return 0;
}
