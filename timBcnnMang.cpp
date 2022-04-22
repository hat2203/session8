#include <stdio.h>
#include <math.h>
#include "func.h"
int main(){
	int n;
	printf ("nhap n:");
	scanf ("%d",&n);
	int arr[n];
	nhapMang(arr,n);
	xuatMang(arr,n);
	//sapXepMangNhap(arr,n);
	int Bcnn=BcnnMang(arr,n);
	printf ("\n%d la Bcnn",Bcnn);
}
