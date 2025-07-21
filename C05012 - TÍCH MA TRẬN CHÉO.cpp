#include<stdio.h>
#include<string.h>

int T = 1 ; 

void solve(){
	int m  ; scanf("%d",&m) ; 
	int a[m][m] , b[m][m] ; 
	int cnt = 1 ; 
	for(int i = 0 ; i < m ; i++){
		cnt = 1 ; 
		for(int j = 0 ; j < m ; j++){
			if(j <= i) {
				a[i][j] = cnt ; 
				cnt++ ; 
			} else a[i][j] = 0 ; 
			b[j][i] = a[i][j] ; 
		}
	}
	printf("Test %d:\n",T) ; 
	int c[m][m] ; 
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < m ; j++){
			c[i][j] = 0 ; 
			for(int k = 0 ; k < m ; k++){
				c[i][j] += a[i][k]*b[k][j] ; 
			}
			printf("%d ",c[i][j]) ; 
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

