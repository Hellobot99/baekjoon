#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int a=1, b=1, c=1, d;
    while (a != 0 || b != 0 || c != 0)
    {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) { break; }
        if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) { printf("right\n"); }
        else { printf("wrong\n"); }
    }

    return 0;
}
