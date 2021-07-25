#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char word[1000000] = {0,};
	int cnt = 0;

	scanf("%[^\n]s", word);
	char* ptr2 = strtok(word, " ");
	
	while (ptr2 != NULL)
	{
		ptr2 = strtok(NULL, " "); 
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}
