#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c;
	printf("Nhap 3 so a, b, c");
	scanf("%f %f %f",&a,&b,&c);
	if(a == 0){
		if(b == 0){
			if(c == 0) printf("phuong trinh vo so no");
			else printf("Phuong trinh vo nghiem");
		}
		else{
			float x = -c/b;
			printf("Phuong trinh co 1 nghiem %.3f",x);
		}
	}
	else{
		float dt = b * b - 4*a*c;
		if(dt > 0){
			printf("PHUONG TRINH CO 2 NO PB \n");
			float x1 = (-b-sqrt(dt))/(2*a);
			float x2 = (-b+sqrt(dt))/(2*a);
			printf("%.3f %.3f",x1,x2);
		}
		else if(dt == 0){
			printf("PHUONG TRINH CO NGHIEM KEP\n");
			float x = -b/(2*a);
			printf("%.3f",x);
		}
		else{
			printf("Phuong trinh vo nghiem");
		}
	}
	return 0;
}
