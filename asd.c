#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct
{
    char word[20001];
}voc;


int compare(const void* a, const void* b)
{
	int len_a = strlen((const char*)a);
	int len_b = strlen((const char*)b);

	if (len_a < len_b) return -1;
	if (len_a > len_b) return 1;

	return strcmp((const char*)a, (const char*)b);
}

int main(void)
{
	int size, length = 51;
	char arr[20000][51] = { 0 };
	scanf("%d", &size);

	for (int i = 0; i < size; i++)
		scanf("%s", arr[i]);

	
	qsort(arr, size, sizeof(arr[0]), compare);

	
	for (int i = 0; i < size; i++) {
		if (strcmp(arr[i], arr[i + 1]) != 0 || i == size - 1)
			printf("%s\n", arr[i]);
	}
	return 0;
}