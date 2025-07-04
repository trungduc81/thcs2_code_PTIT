#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long

int isprime(int n){
	if(n<2) return 0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}

int tong(int n){
	int sum = 0 ; 
	while(n >0){
		sum += n%10 ; 
		n /= 10 ; 
	}
	return sum ; 
}

int smith(int n){
	int sum = 0 ; 
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(isprime(i)){
			while(n%i==0){
				n /= i ; 
				sum += tong(i) ; 
			}
		}
	}
	if(isprime(n)) sum+= tong(n) ; 
	return sum ; 
}

void solve(){
	int n ; scanf("%d",&n) ; 
	if(tong(n)==smith(n)) printf("YES") ; 
	else printf("NO") ; 
	
}

int main(){
	solve();
}
 
