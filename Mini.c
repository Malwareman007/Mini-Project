#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
//using namespace std ;
//THe Four choice function
int converttohex(int num) {
 int base=16;
 int rem;
// base condition
 if (num == 0)
 {
 return 0;
 }
 else
 {
 rem = num % base; // get the rightmost digit
 converttohex(num/base); // recursive call
 if(base == 16 && rem >= 10)
 {
 printf("%c", rem+55);
 }
 else
 {
 printf("%d", rem);
 }
 }
 return 0;
}
int quadratic() {
 float a,b,c; 
 float root1,root2,imaginary;
 float discriminant;
 printf(" \n enter values of a,b,c of quadratic equation(ax^2+bx+c):");
 scanf("%f%f%f",&a ,&b ,&c);
 discriminant=(b * b)-(4 * a * c);
 switch(discriminant>0)
 {
 case 1:
 root1=(-b + sqrt(discriminant))/(2*a);
 root2=(-b - sqrt(discriminant))/(2*a);
 printf("\n two distinct and real roots exists: %.2f and %.2f",root1,root2);
 break;
 case 0:
 switch(discriminant<0)
 {
case 1:
 root1=root2=-b/(2*a);
 imaginary=sqrt(-discriminant)/(2*a);
 printf("\n two distinct complex roots exists: %.2f+i%.2f and %.2fi%.2f",root1,imaginary,root2,imaginary);

 break;
 case 0:
 root1=root2=-b/(2*a);
 printf("\n two equal and real roots exists: %.2f and %.2f",root1,root2);
 break; 
 }}
 return 0;}
int floydandpascal() {
 int n, i, c, a = 1;
 printf("Enter the number of rows of Floyd's triangle to print\n");
 scanf("%d", &n);
 for (i = 1; i <= n; i++)
 {
 for (c = 1; c <= i; c++)
 {
 printf("%d ", a); // Please note space after %d
 a++;
 }
 printf("\n");
 }
int j;
 printf("enter height of triangle: \n");
 scanf("%d",&n);
 for(i = 0; i <= n; i++) {
 for(j = 0; j <= n-i; j++)
 printf(" ");

 for(j = 0; j <= i; j++)
 printf(" %3d", ncr(i, j));
 printf("\n");
 }
 return 0;
}
int issymmetric() {
 int n;
 printf("\nEnter the dimension of the matrix: \n\n");
 scanf("%d", &n);
 int c, d, a[n][n], b[n][n], temp;
 printf("\nEnter the %d elements of the matrix: \n\n",n*n);
 for(c = 0; c < n; c++)
 for(d = 0; d < n; d++)
 scanf("%d", &a[c][d]);
 for(c = 0; c < n; c++)
 for(d = 0; d < n; d++)
 b[d][c] = a[c][d];
 printf("\n\nThe original matrix is: \n\n");
 for(c = 0; c < n; c++)
 {
 for(d = 0; d < n; d++)
 {
 printf("%d\t", a[c][d]);
 }
 printf("\n");
 }
 printf("\n\nThe Transpose matrix is: \n\n");
 for(c = 0; c < n; c++)
 {
 for(d = 0; d < n; d++)
 {
 printf("%d\t", b[c][d]);
 }
 printf("\n");
 }
 for(c = 0; c < n; c++)
 {
 for(d = 0; d < n; d++)
 {
 if(a[c][d] != b[c][d])
 {
 printf("\n\nMatrix is not Symmetric\n\n");
 exit(0);
 }
 }
 }
 printf("\n\nMatrix is Symmetric\n\n");
 return 0;
}
//
int factorial(int n) {
 int f;

 for(f = 1; n > 1; n--)
 f *= n;

 return f;
}
int ncr(int n,int r) {
 return factorial(n) / ( factorial(n-r) * factorial(r) );
}

int main() {
int doloop=1;
 while(doloop){
 printf("\nEnter your choice\n");
 printf("Enter 1 for decimal to hex\n");
 printf("Enter 2 to check Symmetry of matrix\n");
 printf("Enter 3 to find roots of quadratic\n");
 printf("Enter 4 to print floyd and pascal traingle\n");
 int choice=0,num;
 scanf("%d",&choice);
 switch (choice) {
 case 1:
 printf("Enter the no. to be converted\n");
 scanf("%d",&num);
 converttohex(num);
 break;
 case 2:
 issymmetric();
 break;
 case 3:
 quadratic();
 break;
 case 4:
 floydandpascal();
 break;

 default:
 printf("invalid choice Exiting/.....");
 doloop=0;
 break;

 }

 }
 return 0;
 }
