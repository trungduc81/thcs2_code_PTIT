#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100006
#define ll long long

ll gcd(ll a , ll b){
	if(b==0) return a ; 
	else return gcd(b,a%b) ; 
}

ll lcm(ll a , ll b){
	return a/gcd(a,b) * b ; 
}

void solve(){
	ll m , n ; scanf("%lld %lld",&m,&n) ; 
	if(m>n) {
		ll tmp = m ; 
		m = n ; 
		n = tmp ; 
	}
	ll res = m ; 
	for(ll i = m ; i <= n ; i++){
		 res = lcm(res,i) ; 
	}
	printf("%lld\n",res) ; 
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        solve();
    }
}
