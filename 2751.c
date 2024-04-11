#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int n,max=0;
    int* arr;

    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * (n));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (max < arr[i])max = arr[i];
    }

    for (int i = 1; i < max+1; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (arr[k] == i)printf("%d\n", i);
        }
    }


    free(arr);

    return 0;
}
