#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���� ����
//�� N���� ������ �־����� ��, ���� v�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
int main()

{
	int a,v,sum=0;
	int a1[100];
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &a1[i]);
	}

	scanf("\n%d", &v);

	for (int i = 0; i < a; i++) {
		if (a1[i] == v)sum++;
	}

	printf("%d", sum);
	

	return 0;
}