#include<stdio.h>
#include<math.h>
#define ll long long

ll check(ll n){
	int sum = 0 ; 
	while(n>0){
		int m = n % 10 ; 
		sum += m ; 
		if(m%2==0) return 0 ; 
		n /= 10 ; 
	}
	if(sum%2==0) return 0 ; 
	return 1 ; 
}

ll reverse(ll n){
	ll sum = 0 , k = n ;  
	while(k>0){
		sum = sum*10 + k%10 ; 
		k /=10 ; 
	}
	return sum == n ; 
}

void solve(){
	ll a ; scanf("%lld",&a) ; 
	if(reverse(a) && check(a)) printf("YES\n") ; 
	else printf("NO\n") ; 
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		solve();
	}
}
 
