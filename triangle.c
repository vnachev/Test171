#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p, P, S;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c); 
    if (a<=0 || b<=0 || c<=0 || a+b<=c || a+c<=b || b+c<=a)
    {
       printf("Invalid tringle!\n");
       return 1;
    }
    P = a + b + c;
    p = P / 2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("P = %.2f\n", P);
    printf("S = %.2f\n", S);
    return 0;
}
