#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

int gcd(int a , int b){
	if(b==0) return a ; 
	else return gcd(b,a%b) ; 
}

int tong(int n){
	int sum = 0 ; 
	while(n>0){
		sum += n%10 ; 
		n /= 10 ; 
	}
	return sum ; 
}

int isprime(int n){
	if(n<2) return 0 ; 
	for(int i = 2 ; i *i <= n ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}

void solve(){
	int a , b ; scanf("%d %d" , &a , &b) ; 
	if(isprime(tong(gcd(a,b)))) printf("YES\n") ; 
	else printf("NO\n") ; 	 
}

int main(){
	int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	}
}
