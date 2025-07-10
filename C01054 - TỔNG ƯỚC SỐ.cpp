#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#define ll long long

int prime[10005] ; 

void sang(){
	memset(prime,1,sizeof(prime)) ; 
	prime[0] = prime[1] = 0 ; 
	for(int i = 2 ; i*i <= 10000 ; i++){
		if(prime[i]){
			for(int j = i*i ; j <= 10000 ; j += i){
				prime[j] = 0 ; 
			}
		}
	}
}

ll ptich(int n){
	ll res = 0 ; 
	for(int i = 2 ; i*i <= n  ; i++){
		if(prime[i]){
			while(n%i==0){
				res += i ; 
				n /= i ; 
			}
		}
	}
	if(n>1) res += n ; 
	return res ; 
}

int main(){
     	sang();  
    	int n ; scanf("%d",&n) ; 
    	int a[n] ; 
    	for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]) ; 
    	ll sum  = 0 ; 
    	for(int i = 0 ; i < n ; i++){
    		sum += ptich(a[i]) ; 
		}
		printf("%lld\n",sum) ; 
}
