#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

void nhap(int a[100][100], int m, int n){
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
}

void in(int a[100][100], int m, int n){
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

void nhan(int a[100][100], int b[100][100], int res[100][100], int m, int n, int p){
	for (int i = 0; i < m; i++){
		for (int j = 0; j < p; j++){
			res[i][j] = 0;
			for (int k = 0; k < n; k++){
				res[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

int main(){
	int m, n, p, q;
	scanf("%d %d %d %d", &m, &n, &p, &q);
	int a[100][100], b[100][100], c[100][100];
	int ab[100][100], abc[100][100];
	nhap(a, m, n);
	nhap(b, n, p);
	nhap(c, p, q);

	nhan(a, b, ab, m, n, p);    
	nhan(ab, c, abc, m, p, q);   

	in(abc, m, q);               
	return 0;
}

