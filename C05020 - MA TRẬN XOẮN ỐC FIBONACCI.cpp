#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

ll fi[93] ; 

void fibo(){
	fi[0] = 0 ; fi[1] = 1 ;  
	for(int i = 2 ; i < 93 ; i++){
		fi[i] = fi[i-1] + fi[i-2] ; 
	}
}

void solve(){
	int n ; scanf("%d",&n) ; 
	ll a[n][n] ; 
    int h1 = 0 , h2 = n - 1 , c2 = n - 1 , c1 = 0 ; 
    int cnt = 0 ; 
    while(h1<=h2 && c1 <= c2){
    	for(int j = c1 ; j <= c2 ; j++){
    		a[h1][j] = fi[cnt++] ; 
		}
		h1++ ; 
		for(int j = h1 ; j <= h2 ; j++){
			a[j][c2] = fi[cnt++] ; 
		}
		c2-- ; 
		if(c2 >= c1){
			for(int j = c2 ; j >= c1 ; j--){
				a[h2][j] = fi[cnt++] ; 
			}
		}
		h2-- ; 
		if(h1<= h2){
			for(int j = h2 ; j >= h1 ; j--){
				a[j][c1] = fi[cnt++] ;  
			}
		}
		c1++ ; 
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ",a[i][j]) ; 
		}
		printf("\n") ; 
	}
}

int main(){
	fibo() ; 
	solve() ; 
}




