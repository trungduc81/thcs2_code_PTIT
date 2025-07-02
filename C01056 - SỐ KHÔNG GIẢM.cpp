#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

int check(ll n){
	while(n>0){
		int a = n%10 ; 
		int b = (n/10)%10 ; 
		if(a<b) return 0 ; 
		n /= 10 ; 
	}
	return 1 ; 
}

int main() {
    int t; 
    scanf("%d", &t); 
    while (t--){
        ll n ; scanf("%lld",&n) ; 
        if(check(n)) printf("YES\n") ; 
        else printf("NO\n") ; 
    }
}

