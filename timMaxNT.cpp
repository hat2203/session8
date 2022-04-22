#include <stdio.h>
#include <math.h>
#include "func.h"
int main (){
	int n;
	printf ("nhap n:");
	scanf ("%d",&n);
	int arr[n];
	nhapMang(arr,n);
	xuatMang(arr,n);
	int max=0;
	max= timMaxNT(arr,n);
	printf ("\nso nguyen to be nhat lon hon tat ca cac gia tri trong mang la:%d",max);
	
}
