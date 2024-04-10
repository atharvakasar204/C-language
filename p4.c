#include <stdio.h>
#include <math.h>
/* Q find Hypotenous 
// hypotenous = square of side ++
// in the below program we use that formula*/
int main() {
    double A; 
    double B; 
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A+B*B); // we use here a formula of hypotenous

    printf("hypotenius: %lf", C);

    return 0;
}
