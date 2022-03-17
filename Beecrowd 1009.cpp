#include <stdio.h>

int main()
{
    char NOME[10];
    double A,B; 

    scanf("%s", NOME);

    scanf("%lf" ,&A);
    
    scanf("%lf", &B);

    printf("TOTAL = R$ %.2f\n",(A+B*0.15));

    return 0;
}
