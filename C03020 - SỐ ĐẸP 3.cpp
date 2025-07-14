#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define ll long long
int cnt[10] ; 

bool pld(ll n){
	ll k = n , sum = 0 ; 
	while(k>0){ 
		sum = sum*10 + k%10 ; 
		k /= 10 ; 
	}
	return sum == n ; 
}

bool six(ll n){
	while(n>0){
		int m = n % 10 ; 
		if(m==6) return 1 ; 
		n /= 10 ; 
	}
	return 0 ; 
}

bool tong(ll n){
	int sum = 0 ; 
	while(n > 0){
		sum += n%10 ; 
		n /= 10 ; 
	}
	if(sum%10 == 8) return 1 ; 
	else return 0 ; 
}

void solve(){
	ll a , b ; scanf("%lld %lld",&a,&b) ;  
	if(a>b){
		ll tmp = a ; 
		a = b ; 
		b = tmp ; 
	}
	for(ll i = a ; i <= b ; i++){
		if(tong(i)&&six(i)&&pld(i)) {
			printf("%lld ",i) ; 
		} 
	}
}

int main(){
	solve() ; 
}
