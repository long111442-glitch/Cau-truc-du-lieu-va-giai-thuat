#include<stdlib.h>
#include<stdio.h>

int main(){
	int n, m;
	float **p;
	printf("Nhap n, m");
	scanf("%d %d",&n, &m);
	p = (float**)malloc(n*sizeof(float*));
	for(int i = 0; i < n; i++){
		p[i] = (float*)malloc(m*sizeof(float));
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("Nhap phan tu a[%d][%d]",i+1,j+1);
			scanf("%f",&p[i][j]);
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%f ", p[i][j]);
		}
	}
	return 0;
}
