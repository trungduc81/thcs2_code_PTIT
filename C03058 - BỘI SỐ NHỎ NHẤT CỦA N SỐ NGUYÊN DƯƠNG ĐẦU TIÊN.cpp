#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ll long long

ll gcd(ll a , ll b){
	if(b==0) return a ; 
	else return gcd(b,a%b) ; 
}

ll lcm(ll a , ll b){
	return a/gcd(a,b)*b ; 
}

void solve(){
	ll n ; scanf("%lld",&n) ; 
	ll res = 1 ; 
	if(n==1){
		printf("1\n") ; 
		return ; 
    }
	for(ll i = 2 ; i <= n ; i++){
		 res = lcm(res,i) ; 
	}
	printf("%lld\n",res) ; 
}

int main() {
    int t; scanf("%d", &t);
    while (t--){
    	solve() ; 
	}
}

