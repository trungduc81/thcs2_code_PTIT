#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int T = 1 ; 
int prime[10000] ; 
int res[1000] , idx = 0 ;  

void sang(){
	memset(prime,1,sizeof(prime)) ; 
	prime[0] = prime[1] = 0 ; 
	for(int i = 2 ; i *i <= 10000 ; i++){
		if(prime[i]){
			for(int j = i*i ; j <= 10000 ; j+=i){
				prime[j] = 0 ; 
			}
		}
	}
	for(int i = 0 ; i < 10000 ; i++){
		if(prime[i]) res[idx++] = i ; 
	}
}

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n][n] ; 
    int h1 = 0 , h2 = n - 1 , c2 = n - 1 , c1 = 0 ; 
	int cnt = 0 ;  
    while(h1<=h2 && c1 <= c2){
    	for(int j = c1 ; j <= c2 ; j++){
    		a[h1][j] = res[cnt++] ; 
		}
		h1++ ; 
		for(int j = h1 ; j <= h2 ; j++){
			a[j][c2] = res[cnt++] ; 
		}
		c2-- ; 
		if(c2 >= c1){
			for(int j = c2 ; j >= c1 ; j--){
				a[h2][j] = res[cnt++] ; 
			}
		}
		h2-- ; 
		if(h1<= h2){
			for(int j = h2 ; j >= h1 ; j--){
				a[j][c1] = res[cnt++] ;  
			}
		}
		c1++ ; 
	}
	printf("Test %d:\n",T) ; 
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ",a[i][j]) ; 
		}
		printf("\n") ; 
	}
	T++ ; 
}

int main(){
	sang() ; 
	int t ; scanf("%d",&t) ;  
	while(t--){
		solve() ; 
	}
}
