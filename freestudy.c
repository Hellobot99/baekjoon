#include <stdio.h>
#include <stdlib.h>
#define Max 100

typedef int element;
typedef struct
{
	element data[Max];
	int top;
}stacktype;

void init_stack(stacktype * s)
{
	s->top = -1;
}

int is_empty(stacktype *s)
{
	return(s->top == -1);
}

int is_full(stacktype *s)
{
	return(s->top == (Max - 1));
}

void push(stacktype *s, element item)
{
	if (is_full(s))
	{
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else s->data[++(s->top)] = item;
}

element pop(stacktype *s)
{
	if (is_empty(s))
	{
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}

element peek(stacktype* s)
{
	if (is_empty(s))
	{
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->data[(s->top)];
}

int main(void)
{
	stacktype s;

	init_stack(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	printf("%d", pop(&s));

	return 0;
}