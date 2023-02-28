#include <stdio.h>
#include <conio.h>
struct Oxy {
	double ox, oy;
};

void Nhap (struct Oxy &a) {
	printf("\n nhap ox vao ");
	scanf(" %d", &a. ox);
	getchar();
	printf("\n nhap oy vao");
	scanf("%d", &a. oy);	
} 
void Xuat (struct Oxy a) {
	printf ("%d %d", a.ox, a.oy);
}
int main () {
	struct Oxy Oxy;
	Nhap(Oxy) ;
	Xuat(Oxy);
	getch();
	return 0;
}
