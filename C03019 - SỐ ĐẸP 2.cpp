#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define ll long long

bool pld(ll n){
	ll k = n , sum = 0 , tong = 0 ; 
	while(k>0){
		tong += k % 10 ; 
		sum = sum*10 + k%10 ; 
		k /= 10 ; 
	}
	return sum == n && tong%10 == 0 ; 
}

void solve(){
	int n ; scanf("%d",&n) ; 
	ll a = pow(10,n-1) ; 
	ll b = pow(10,n) ; 
	int cnt = 0 ; 
	for(ll i = a ; i < b ; i++){
		if(pld(i)) cnt++ ; 
	}
	printf("%d\n",cnt) ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	}
}
