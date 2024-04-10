#include <stdio.h>
#include <math.h>
/*find a circumference
circumference = 2*3.14*radius
we use that formula */

int main() {

  double A;
  double B;

  printf("Enter a A: ");
  scanf("%lf", &A);

  B = 2 * 3.14 * A;// here are we use formula 

  printf("Circumference is %lf", B);

  return 0;
}
