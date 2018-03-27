#include <stdio.h>
#include <math.h>
int main(){
  double a,b,c, determinant, root1,root2, realPart, imaginaryPart;
  printf("Enter the coefficients a, b and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  determinant = b*b-4*a*c;
  //Real and distinct roots
  if(determinant > 0){
    //sqrt() function return square root
    root1 = (-b+sqrt(determinant))/(2*a);
    root2 = (-b-sqrt(determinant ))/(2*a);
    printf("root1=%.21f and root2 = %.21f", root1, root2);
  }
  else if(determinant == 0){
    root1 = root2 = -b/(2*a);
    printf("root1 = root2 = %.2lf;", root1);
  }
  //Roots are not real numbers (complex conjugate roots)
  else {
    realPart = -b/(2*a);
    imaginaryPart = sqrt(-determinant)/(2*a);
    printf("root 1 = %.21lf+%.21fi and root2 = %.2f - %.2fi \n", realPart, imaginaryPart, realPart, imaginaryPart);
  }
  return 0;
}
