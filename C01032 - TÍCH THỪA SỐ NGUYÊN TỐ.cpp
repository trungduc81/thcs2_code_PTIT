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

int main(){
	sang();  
    int t ; scanf("%d",&t) ; 
    while(t--){
    	int n ; scanf("%d",&n) ; 
    	int res = 1 ; 
    	for(int i = 2 ; i*i <= n ; i++){
    		if(prime[i] && n % i == 0){
    			res *= i;
    			while(n % i == 0) n /= i;
			}
		}
		if(n > 1) res *= n ;  
		printf("%d\n",res) ; 
	}
}

