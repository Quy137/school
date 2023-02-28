#include <stdio.h>
struct Date{
	int ngay, thang, nam;
};
void nhap (struct Date &a) {
	printf("nhap ngay");
	scanf("%d", &a.ngay);
	printf("nhap thang");
	scanf("%d", &a.thang);
	printf("nhap nam");
	scanf("%d", &a.nam);		
}
void xuat (struct Date a) {
	printf("%d %d %d", a.ngay, a.thang, a.nam);
}
int kiemtra (struct Date a) {
	if (a.thang >12)
		return 0;
	if (a.thang == 2) {
		if(a.ngay >28)
			return 0;
	} 
		
	if (a.thang == 1 || a.thang == 3|| a.thang==5|| a.thang==7|| a.thang==8 || a.thang ==10|| a.thang==12){
		if(a.ngay >31)
			return 0;	
	}
	if (a.ngay>30)
		return 0;
}
int main () {
	struct Date Date;
	nhap(Date);
	xuat(Date);
	return 0;
}
