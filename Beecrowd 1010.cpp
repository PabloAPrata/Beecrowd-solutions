#include <stdio.h>

int main()
{
    int a,b,a2,b2;
    double c,c2;


    scanf("%d",&a);


    scanf("%d",&b);


    scanf("%lf",&c);


    scanf("%d",&a2);


    scanf("%d",&b2);


    scanf("%lf",&c2);

    printf("VALOR A PAGAR: R$ %.2f\n",(b*c)+(b2*c2));

    return 0;
}
