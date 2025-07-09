#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

ll scs(ll n){
	int dem = 0 ; 
	while(n>0){
		dem++ ; 
		n /= 10 ; 
	}
	return dem ; 
}

ll gcd(ll a , ll b){
	if(b==0) return a ; 
	else return gcd(b,a%b) ; 
}

ll lcm(ll a , ll b){
	ll res = gcd(a,b) ; 
	return a/gcd(a,b)*b ; 
}


void solve(){
	char s[20] ; 
	scanf("%s",s) ; 
	int len = strlen(s) ; 
	if(len%2 != 0) {
		printf("INVALID\n") ; 
		return ; 
	}
	else {
		char s1[len/2+1] , s2[len/2+1] ; 
		strncpy(s1,s,len/2) ; s1[len/2] = '\0' ; 
		strncpy(s2,s+len/2,len/2) ; s2[len/2] = '\0' ; 
		ll m = atoll(s1) , n = atoll(s2) ; 
		printf("%lld\n",lcm(m,n)) ; 
	}
}

int main(){
    int t ; scanf("%d",&t) ; 
    while(t--){
    	solve() ; 
	}
}
