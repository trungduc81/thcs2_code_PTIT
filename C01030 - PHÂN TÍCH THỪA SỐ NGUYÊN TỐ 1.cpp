#include<stdio.h>
#include<math.h>
#define ll long long 

int isprime(int n){
	if(n < 2) return 0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		int n ; scanf("%d",&n) ; 
		for(int i = 2 ; i <= sqrt(n) ; i++){
			if(isprime(i)) {
				while(n%i==0) {
					printf("%d ",i) ; 
					n /= i ; 
				}
			}			
		}
		if(isprime(n)) printf("%d",n) ; 
		printf("\n") ; 
	} 
}
