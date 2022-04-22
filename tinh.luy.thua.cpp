#include <stdio.h>
#include <math.h>
#include "func.h"
int main (){
 int x;
 printf ("nhap so x:");
 scanf ("%d", &x);
 int y;
 printf ("nhap so y:");
 scanf ("%d", &y);
 int s=tinhMu(x,y);
 printf ("ket qua la: %d",s);
}
