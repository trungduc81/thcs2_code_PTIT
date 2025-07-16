#include<stdio.h>
#include<math.h>

int isprime(int n){
	if(n<2) return 0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}

int main(){
	int m  ; scanf("%d",&m) ; 
	int a[m+1][m+1] ; 
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1 ; j <= m ; j++){
			scanf("%d",&a[i][j]) ; 
		}
	}
	int sum = 0 ; 
	for(int i = 1 ; i <= m ; i++){
		for(int j = 1 ; j <= m ; j++){
			if(j>=i && isprime(a[i][j]) )
			sum += a[i][j] ; 
		}
	}
	printf("%d",sum) ; 
}
