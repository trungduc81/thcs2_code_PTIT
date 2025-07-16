#include<stdio.h>
#include<math.h>

int T = 1 ; 

void solve(){
	int m , n ; scanf("%d %d",&m,&n) ; 
	int a[m][n] ; 
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d",&a[i][j]) ; 
		}
	}
	int sum = 0 , MAX = -1 , tmp1 = 0 , tmp2 = 0 ;  
	
	for(int i = 0 ; i < m ; i++){
		sum = 0 ; 
		for(int j = 0 ; j < n ; j++){
			sum += a[i][j] ; 
		}
		if(MAX < sum) {
			MAX = sum ; 
			tmp1 = i ; 
		}
	}
	MAX = - 1 ; 
	
	for(int j = 0 ; j < n ; j++){
		sum = 0 ; 
		for(int i = 0 ; i < m ; i++){
			if(i==tmp1) continue ; 
			sum += a[i][j] ; 
		}
		if(MAX < sum){
			MAX = sum ; 
			tmp2 = j ; 
		}
	}
	
	printf("Test %d:\n",T) ; 
	for(int i = 0 ; i < m ; i++){
		if(i == tmp1) continue ; 
		for(int j = 0 ; j < n ; j++){
			if(j == tmp2) continue ; 
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
