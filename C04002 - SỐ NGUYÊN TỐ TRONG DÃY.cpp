#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long
#define MAX 1000005

int isprime(int n){
	if(n<2) return 0 ; 
	for(int i = 2 ;  i<= sqrt(n) ; i++){
		if(n%i==0) return 0 ; 
	}
	return 1 ; 
}


void solve(){
	int n ; scanf("%d",&n) ; 
	int a[n] ; 
	for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]) ; 
	for(int i = 0 ; i < n ; i++){
		if(isprime(a[i])) printf("%d ",a[i]) ; 
	}
	printf("\n") ; 
}

int main(){
    int t ; scanf("%d",&t) ; 
	while(t--){
		solve() ; 
	} 
}

