#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long



int main(){
	int n ; scanf("%d",&n) ; 
	int a[n+1][n+1] ; 
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(j <= i) a[i][j] = 0 ; 
			else a[i][j] = j - i ; 
			printf("%d ",a[i][j]) ; 
		}
		printf("\n") ; 
	}
}

