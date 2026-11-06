#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n;
	float *p;
	scanf("%d",&n);
	p = (float*)malloc(n*sizeof(float));
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu ",i+1);
		scanf("%f",&p[i]);
	}
	for(int i = 0; i < n; i++){
		printf("%f",p[i]);
	}
	return 0;
	
}
