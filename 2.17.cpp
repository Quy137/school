#include <stdio.h>
#include <math.h>

long Tong(int n) {
	if (n==0)
		return 0;
	return pow(n,2)+Tong(n-1);
}
int main() {
	int n, s;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	s = Tong(n);
	printf(" s = %d", s);
	
	return 0;
}
