#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

ll utc(ll n){
	if(n%2 !=0) return 0 ; 
	int chan = 0 , le = 0 ; 
	while(n>0){
		int m = n % 10 ; 
		if(m%2==0) chan++ ; 
		else le++ ; 
		n /= 10 ; 
	}
	return chan > le ; 
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		ll n ; scanf("%lld",&n) ; 
		if(utc(n)) printf("YES\n") ; 
		else printf("NO\n") ; 
	}
	
}
 
