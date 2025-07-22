#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int T = 1 ; 

void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n+1][n+1] ; 
    int h1 = 1 , h2 = n , c2 = n , c1 = 1 ; 
	int cnt = n*n ;  
    while(h1<=h2 && c1 <= c2){
    	for(int j = c1 ; j <= c2 ; j++){
    		a[h1][j] = cnt ; 
    		cnt-- ; 
		}
		h1++ ; 
		for(int j = h1 ; j <= h2 ; j++){
			a[j][c2] = cnt ; 
			cnt-- ; 
		}
		c2-- ; 
		if(c2 >= c1){
			for(int j = c2 ; j >= c1 ; j--){
				a[h2][j] = cnt ; 
				cnt-- ; 
			}
		}
		h2-- ; 
		if(h1<= h2){
			for(int j = h2 ; j >= h1 ; j--){
				a[j][c1] = cnt ;  
				cnt-- ; 
			}
		}
		c1++ ; 
	}
	printf("Test %d:\n",T) ; 
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			printf("%d ",a[i][j]) ; 
		}
		printf("\n") ; 
	}
	T++ ; 
}

int main(){
	int t ; scanf("%d",&t) ;  
	while(t--){
		solve() ; 
	}
}



