#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n < 2){
		printf("Khong la snt");
		return 0;
	}
	int kt = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			kt = 1;
			break;
		}
	}
	if(kt == 0) printf("%d la snt",n);
	if(kt == 1) printf("%d ko la snt",n);
	return 0;
}
