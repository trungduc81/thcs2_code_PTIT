#include<stdio.h>
#include<math.h>
#define ll long long
#define MAX 100000

int isprime(ll n){
	if(n<2) return 0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}

int main(){
	int n ; scanf("%d",&n) ; 
	int cnt = 0 ; ll i = 2 ; 
	while(1){
		if(isprime(i)){
			printf("%d\n",i) ;
			cnt++ ;  
		}
		i++ ; 
		if(cnt==n) break ; 	
	}
}

