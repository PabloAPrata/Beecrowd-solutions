#include <stdio.h>


int main()
{
    int x;
    double gasto;

    scanf("%d %lf",&x, &gasto);

    printf("%.3lf km/l\n",(x/gasto));

    return 0;
}
