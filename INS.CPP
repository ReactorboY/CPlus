
#include <stdio.h>
#include <conio.h>

void main()
{
 clrscr();
 int a[6] = {6,9,7,5,3,1};
 int i,j,key;
 for (j=1;j < 6;j++){
  key = a[j];
  i = j - 1;
  while (i >=0 && a[i] > key){
   a[i+1] = a[i];
   i--;
  }
  a[i+1] = key;
 }
 for (int k = 0;k < 6;k++){
  printf("%d",a[k]);
 }
 getch();
}