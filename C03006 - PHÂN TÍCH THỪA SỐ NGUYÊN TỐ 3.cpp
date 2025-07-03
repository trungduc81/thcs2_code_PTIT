#include<stdio.h>
#include<math.h>
#define ll long long
#define MAX 100000

int isprime(int n){
	if(n<2) return 0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	int T = 1 ; 
	while(t--){
		printf("Test %d: ",T) ; 
		int n ; scanf("%d",&n) ; 
		int k = n ; 
		for(int i = 2 ; i < sqrt(n) ; i++){
			if(isprime(i)){
				int cnt = 0 ; 
				while(n%i==0){
					cnt ++ ; 
					n /= i ; 
				}
			    if(cnt != 0) printf("%d(%d) ",i,cnt) ;
			} 
		}
		if(sqrt(k) == (int) sqrt(k) && isprime(sqrt(k))) 
		printf("%d(1) ",(int) sqrt(k))  ; 
		if(isprime(n)) printf("%d(1)",n) ; 
		printf("\n") ; 
		T++ ; 
	}
}

