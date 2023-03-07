#include<stdio.h>

void nhapMang(int a[], int &n) {
	n = 0;
	int x;
	do {
		printf("Nhap 1 so nguyen cua mang . Nhap so 0 de ket thuc : ");
		scanf("%d", &x);
		if (x != 0)
			a[n++] = x;
	} while(x != 0);
}
void xuatMang(int a[], int n) {
	for(int i = 0; i<n;i++)
		printf("%4d", a[i]);
} 

void tang(int a[], int n) {
	int tam;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i +1; j < n; j++) {
			if (a[i] > a[j]) {
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
	
}


int main () {
	int n;
	int a[n];
	nhapMang(a,n);
	printf("\nmang vua nhap ");
	xuatMang(a,n);
	
	
	tang(a,n);
	printf("\nmang sau khi sap xep la ");
	xuatMang(a,n);
	return 0;
}
