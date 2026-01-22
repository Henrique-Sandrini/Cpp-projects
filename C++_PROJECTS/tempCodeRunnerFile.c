
#include <stdio.h>

int main()
{
    float a1, a2, a3;
    
    printf("digite o angulo 1: ");
        scanf("%f", &a1);
    printf("\ndigite o angulo 2: ");
        scanf("%f", &a2);
    printf("\ndigite o angulo 3: ");
        scanf("%f", &a3);
        
    if (a1 + a2 + a3 == 180){
        if (a1 < 90 && a2 < 90 && a3 < 90) {
            printf ("isso e um triangulo agudo %.1f° %.1f° %.1f°",a1,a2,a3);
        }
        else if (a1 > 90 || a2 > 90 || a3 > 90) {
            printf("isso e um triangulo obtuso %.1f %.1f %.1f",a1,a2,a3);
        }
        else {
            printf ("isso e um triangulo retangulo %.1f° %.1f° %.1f°",a1,a2,a3);
        }
    } else {
        printf("isso e um triangulo impossivel.");
    }
    return 0;
}