#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���ڿ� ���ڿ�

int main() {

	char str[1000];
	int a;
	
	scanf("%s", &str);
	scanf("%d", &a);
	printf("%c", str[a-1]);

	return 0;
}