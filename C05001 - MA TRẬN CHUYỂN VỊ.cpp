#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

void solve(){
	int m , n ; scanf("%d %d",&m,&n) ; 
	int a[m][n] ; 
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d",&a[i][j]) ; 
		}
	}
	int b[n][m] ; 
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			 b[i][j] = a[j][i] ; 
		}
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			printf("%d ",b[i][j]) ; 
		}
		printf("\n") ; 
	}
} 

int main(){ 
    solve() ; 
}

