#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int m,n,a[2][2],b[2][2],c[2][2],sum=0;
 printf("Enter first and Second Matrix Element\n");
 for(m=0;m<2;m++)
  for (n=0;n<2;n++)
   scanf("%d %d", &a[m][n], &b[m][n]);

 printf("Enter Addition Mtraix Element\n");
 for (m=0;m<2;m++){
  for(n=0;n<2;n++) {
  for(int k=0;k<2;k++){
   sum = sum + a[m][k] * b[k][n];
   }
  c[m][n] = sum;
  sum = 0;
}}

 for(m=0;m<2;m++){
  for(n=0;n<2;n++){
   printf("%d\t", c[m][n]);
  } printf("\n");
  }
 getch();
}