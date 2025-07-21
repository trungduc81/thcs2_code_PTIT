#include<stdio.h>
#include<string.h>

int T = 1 ; 

void solve(){
	int m , n ; scanf("%d %d",&m,&n) ; 
	int a[m][n] , b[n][m] ; 
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d",&a[i][j]) ; 
			b[j][i] = a[i][j] ; 
		}
	}
	printf("Test %d:\n",T) ; 
	int c[m][m] ; 
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < m ; j++){
			c[i][j] = 0 ; 
			for(int k = 0 ; k < n ; k++){
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

