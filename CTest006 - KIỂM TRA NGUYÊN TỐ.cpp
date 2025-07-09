#include<stdio.h>
#include<string.h>
#include<math.h>

int isprime(int n){
	if(n<2) return  0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}

int main(){
    int n , m ; scanf("%d %d",&n,&m) ; 
    int a[n][m] ; 
    for(int i = 0 ; i < n ; i++){
    	for(int j = 0 ; j < m ; j++){
    		scanf("%d",&a[i][j]) ; 
    		if(isprime(a[i][j])) a[i][j] = 1 ; 
    		else a[i][j] = 0 ; 
		}
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			printf("%d ",a[i][j]) ; 
		}
		printf("\n") ; 
	}
}
