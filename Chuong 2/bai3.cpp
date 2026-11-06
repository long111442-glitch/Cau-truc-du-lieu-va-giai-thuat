#include<stdio.h>
#include<stdlib.h>
struct SinhVien{
	char hoten[50];
	char ma[20];
	float diem1, diem2, diem3;
};

int main(){
	struct SinhVien *sv;
	int n;
	
	printf("Nhap so luong sinh vien");
	scanf("%d",&n);
	getchar();
	sv = (struct SinhVien*)malloc(n*sizeof(struct SinhVien));
	for(int i = 0; i < n; i++){
		printf("\nSinh vien thu %d:\n",i+1);
		printf("Nhap ho ten: ");
		fgets((sv + i) ->hoten, 50, stdin);
		printf("Nhap ma sinh vien: ");
		scanf("%s", (sv+i) -> ma);
		printf("Nhap diem 1: ");
		scanf("%f", &(sv+i) -> diem1);
		printf("Nhap diem 2: ");
		scanf("%f", &(sv+i) -> diem2);
		scanf("%f", &(sv+i) -> diem3);
		
		getchar();
	}
	printf("\nDANH SACH SINH VIEN\n");
	for(int i = 0; i < n; i++){
		printf("\nSinh vien thu %d\n",i+1);
		printf("Ho ten: %s\n",(sv+i) -> hoten);
		printf("Ma sinh vien: %s\n", (sv+i)->ma);
		printf("Diem1: %.2f\n",(sv+i)->diem1);
		printf("Diem2: %.2f\n",(sv+i)->diem2);
		printf("Diem3: %.2f\n",(sv+i)->diem3);
	}
	free(sv);
	return 0;
}
