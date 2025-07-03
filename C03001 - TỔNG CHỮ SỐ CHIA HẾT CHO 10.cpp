#include<stdio.h>
#include<math.h>
#define ll long long

void check(ll n){
	int sum = 0 ; 
	while(n>0){
		sum += n%10 ; 
		n/=10 ; 
	}
	if(sum%10==0) printf("YES\n") ; 
	else printf("NO\n") ; 
}

int main() {
    int t ; scanf("%d",&t) ; 
    while(t--){
    	ll n ; scanf("%lld",&n) ; 
    	check(n) ; 
	}
	 
}

