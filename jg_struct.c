#include <stdio.h>
#include <string.h>

#define Max 101

typedef struct
{
    float coef;
    int expon;
} terms;

terms term[Max] = { {4, 3}, {3, 2}, {2, 1}, {1 ,0},
                    {3, 2}, {2, 1}, {8, 0} };
int avail = 7;

void poly_mul(int As, int Ae, int Bs, int Be, int* Cs, int* Ce)
{
    int j;
    int C = avail;
    *Cs = C; //*Cs�� ��밡���� �κ��߿� ���ۺκ��� �Ҵ���
       
    for (int i = As; i < Ae+1; i++)
    {
        for (int k = Bs; k < Be+1; k++)
        {
            
            for (j = avail; j < C; j++)
            {
                if (term[i].expon + term[k].expon == term[j].expon)
                {
                    term[j].coef += term[i].coef * term[k].coef; break;
                }
                
            }
            
            if (j == C)
            {
                term[C].expon = term[i].expon + term[k].expon;
                term[C].coef = term[i].coef * term[k].coef;
                C++;
                *Ce = C - 1;
            }
            if (C == avail)
            {
                term[C].expon = term[i].expon + term[k].expon;
                term[C].coef = term[i].coef * term[k].coef;
                C++;
                *Ce = C - 1;
            }

            
        }
    }
    
    
}

void print_poly(int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        printf("%3.0fx^%d ", term[i].coef, term[i].expon);
        if (i != e)
            printf("+ ");
    }
    printf("\n");
}

int main()
{
    int Cs, Ce;
    poly_mul(0, 3, 4, 6, &Cs, &Ce);
    print_poly(Cs, Ce);
    return 0;
}
