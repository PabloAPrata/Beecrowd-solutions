#include <stdio.h>
#include <math.h>

int main()
{
    double RAIO;

    scanf("%lf",&RAIO);

    printf("VOLUME = %.3lf\n",((4/3.0)*(3.14159)*(pow(RAIO,3))));

    return 0;
}                
