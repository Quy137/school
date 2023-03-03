# include <stdio.h>
# include <conio.h> 

long GiaiThua(int n) {
	if (n == 0) 
		return 1;
	return GiaiThua(n - 1)*n;
}
int main () {
	int n, S;
	printf("nhap n =");
	scanf("%d", &n);
	S = GiaiThua(n);
	printf("S = %d", S);
	return 0;
}
