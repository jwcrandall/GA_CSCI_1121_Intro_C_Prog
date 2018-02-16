#include <stdio.h>
#include <math.h>
int main(){
  double a,b,c,determinant, root1,root2,realPart,imaginaryPary;
  printf("Enter the coefficients a,b, and c: ");
  scanf("%lf %lf %lf", &a, &b, &c);
  determinant = b*b-4*a*c;
  //Real and distinc roots
  if(determinant > 0){
    //sqrt() function returns square root
    root1 = (-b+sqrt(determinant))/(2*a);
    root2 = (-b-sqrt(determinant))/(2*a);
  }
  printf("root1=%.2lf and root2=%.2lf\n", root1,root2);
  //Read and repeared roots
  else if(determinant == 0){
    root1 = root2 = -b/(2*a);
    printf("root1 = root2 = %.2lf;", root1);
  }
  //Roots are not real numbers (complex conjugate roots)
  else{
    realPart = -b/(2*a);
    imaginaryParty = sqrt(-determinant)/(2*a);
    printf("root1 = %.2lf+%.21fi and root2 = %.2f-%.2fi",realPart,imaginaryPart,realPart,imaginaryPart);
  }
  return 0;
}
