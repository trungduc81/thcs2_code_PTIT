#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

int T = 1 ; 
void solve(){
	int m , n ; scanf("%d %d",&m,&n) ; 
	int a[m][n] ; 
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d",&a[i][j]) ; 
		}
	}
	printf("Test %d:\n",T) ; 
	for(int i = 1 ; i < m ; i++){
		for(int j = 1 ; j < n ; j++){
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

