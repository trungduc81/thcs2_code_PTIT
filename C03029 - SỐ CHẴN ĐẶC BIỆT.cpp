#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

int check(ll n){
	while(n>0){
		int m = n % 10 ; 
		if(m%2 != 0) return 0 ; 
		n /= 10 ; 
	}
	return 1 ; 
}

int main(){
	int t; scanf("%d",&t) ; 
	while(t--){
		ll n ; scanf("%lld",&n) ; 
		if(check(n)) printf("YES\n") ; 
		else printf("NO\n") ; 
	}
}
